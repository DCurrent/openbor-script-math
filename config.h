#ifndef DC_MATH_CONFIG
#define DC_MATH_CONFIG 1

// Dependencies
#include "data/scripts/dc_instance/main.c"

// Name of library. Used mainly as a base for variable IDs. Must
// be unique vs all other libraries. Try to keep it short.
#define DC_MATH_BASE_ID	 "dcmath"

// Variable keys. Used to identify cross function
// variables used throughout library.
#define DC_MATH_MEMBER_INSTANCE				DC_MATH_BASE_ID + 0
#define DC_MATH_MEMBER_THE_END					1			// Should always last, with a value one higher than previous key ID.

// Instance control. 
#define dc_math_get_instance()		dc_instance_get(DC_MATH_MEMBER_INSTANCE)
#define dc_math_set_instance(value)	dc_instance_set(DC_MATH_MEMBER_INSTANCE, value)
#define dc_math_reset_instance()	dc_instance_reset(DC_MATH_BASE_ID, DC_MATH_MEMBER_INSTANCE, DC_MATH_MEMBER_THE_END)
#define dc_math_free_instance()		dc_instance_free(DC_MATH_BASE_ID, DC_MATH_MEMBER_INSTANCE, DC_MATH_MEMBER_THE_END)
#define dc_math_dump_instance()		dc_instance_dump(DC_MATH_BASE_ID, DC_MATH_MEMBER_INSTANCE, DC_MATH_MEMBER_THE_END)
#define dc_math_export_instance()	dc_instance_export(DC_MATH_BASE_ID, DC_MATH_MEMBER_INSTANCE, DC_MATH_MEMBER_THE_END)
#define dc_math_import_instance()	dc_instance_import(DC_MATH_BASE_ID, DC_MATH_MEMBER_INSTANCE, DC_MATH_MEMBER_THE_END)
#define dc_math_free_export()		dc_instance_free_export(DC_MATH_BASE_ID, DC_MATH_MEMBER_INSTANCE, DC_MATH_MEMBER_THE_END)

#endif // !DC_MATH_CONFIG
