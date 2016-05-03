/// @file	
///	@ingroup 	maxapi
///	@copyright	Copyright (c) 2016, Cycling '74
///	@license	Usage of this file and its contents is governed by the MIT License

#pragma once

#define C74_NO_DEPRECATION
#include "c74_max.h"

namespace c74 { 
namespace max {

	// jit.error.h

	typedef t_atom_long t_jit_err;

	static const int JIT_ERR_NONE 				= 0          ;
	static const int JIT_ERR_GENERIC			= 	('EROR') ;
	static const int JIT_ERR_INVALID_OBJECT		= ('INOB')   ;
	static const int JIT_ERR_OBJECT_BUSY		= 	('OBSY') ;
	static const int JIT_ERR_OUT_OF_MEM			= ('OMEM')   ;
	static const int JIT_ERR_INVALID_PTR		= 	('INVP') ;
	static const int JIT_ERR_DUPLICATE			= ('DUPL')   ;
	static const int JIT_ERR_OUT_OF_BOUNDS		= ('OBND')   ;
	static const int JIT_ERR_INVALID_INPUT		= ('INVI')   ;
	static const int JIT_ERR_INVALID_OUTPUT		= ('INVO')   ;
	static const int JIT_ERR_MISMATCH_TYPE		= ('MSTP')   ;
	static const int JIT_ERR_MISMATCH_PLANE		= ('MSPL')   ;
	static const int JIT_ERR_MISMATCH_DIM		= ('MSDM')   ;
	static const int JIT_ERR_MATRIX_UNKNOWN		= ('MXUN')   ;
	static const int JIT_ERR_SUPPRESS_OUTPUT	= 	('SPRS') ;
	static const int JIT_ERR_DATA_UNAVAILABLE	= ('DUVL')   ;
	static const int JIT_ERR_HW_UNAVAILABLE		= ('HUVL')   ;


	//


	static const int MAX_JIT_MOP_FLAGS_NONE					= 0x00000000; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_ALL				= 0x0FFFFFFF; ///< mop flag @ingroup jitter
                                                                        ; 
	static const int MAX_JIT_MOP_FLAGS_OWN_JIT_MATRIX		= 0x00000001; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_BANG				= 0x00000002; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_OUTPUTMATRIX		= 0x00000004; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_NAME				= 0x00000008; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_TYPE				= 0x00000010; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_DIM				= 0x00000020; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_PLANECOUNT		= 0x00000040; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_CLEAR			= 	0x00000080; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_NOTIFY			= 0x00000100; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_ADAPT			= 	0x00000200; ///< mop flag @ingroup jitter
	static const int MAX_JIT_MOP_FLAGS_OWN_OUTPUTMODE		= 0x00000400; ///< mop flag @ingroup jitter

	static const int MAX_JIT_MOP_FLAGS_ONLY_MATRIX_PROBE 	= 0x10000000; ///< mop flag @ingroup jitter

	static const int JIT_MOP_INPUT 	= 1;                                  ///< mop flag @ingroup jitter
	static const int JIT_MOP_OUTPUT	= 2;                                  ///< mop flag @ingroup jitter



	// t_jit_matrix_info flags
	static const int JIT_MATRIX_DATA_HANDLE		= 0x00000002;	///< data is handle @ingroup jitter
	static const int JIT_MATRIX_DATA_REFERENCE	= 0x00000004; 	///< data is reference to outside memory @ingroup jitter
	static const int JIT_MATRIX_DATA_PACK_TIGHT	= 0x00000008; 	///< data is tightly packed (doesn't use standard 16 byte alignment) @ingroup jitter
	static const int JIT_MATRIX_DATA_FLAGS_USE	= 0x00008000; 	/**< necessary if using handle/reference data flags when creating  @ingroup jitter
													 * jit_matrix, however, it is never stored in matrix */ 
                                                                                                        
	static const int JIT_MATRIX_MAX_DIMCOUNT		= 32; 			///< maximum dimension count @ingroup jitter
	static const int JIT_MATRIX_MAX_PLANECOUNT	= 32; 			///< maximum plane count @ingroup jitter
                                                                                                        
	// t_matrix_conv_info flags @ingroup jitter
	static const int JIT_MATRIX_CONVERT_CLAMP	= 0x00000001;  ///< not currently used @ingroup jitter
	static const int JIT_MATRIX_CONVERT_INTERP	= 0x00000002;	///< use interpolation @ingroup jitter
	static const int JIT_MATRIX_CONVERT_SRCDIM	= 0x00000004;	///< use source dimensions @ingroup jitter
	static const int JIT_MATRIX_CONVERT_DSTDIM	= 0x00000008;	///< use destination dimensions @ingroup jitter



	static t_symbol* _jit_sym_char = gensym("char");
	static t_symbol* _jit_sym_long = gensym("long");
	static t_symbol* _jit_sym_float32 = gensym("float32");
	static t_symbol* _jit_sym_float64 = gensym("float64");
	static t_symbol* _jit_sym_list = gensym("list");
	static t_symbol* _jit_sym_atom = gensym("atom");

	static t_symbol* _jit_sym_jit_mop = gensym("jit_mop");
	static t_symbol* _jit_sym_getdata = gensym("getdata");
	static t_symbol* _jit_sym_data = gensym("data");
	static t_symbol* _jit_sym_getindex = gensym("getindex");
	static t_symbol* _jit_sym_getinfo = gensym("getinfo");
	static t_symbol* _jit_sym_setinfo = gensym("setinfo");
	static t_symbol* _jit_sym_setinfo_ex = gensym("setinfo_ex");
	static t_symbol* _jit_sym_lock = gensym("lock");
	static t_symbol* _jit_sym_matrix_calc = gensym("matrix_calc");
	static t_symbol* _jit_sym_jit_matrix = gensym("jit_matrix");
	static t_symbol* _jit_sym_frommatrix = gensym("frommatrix");
	
	static t_symbol* _jit_sym_getinput = gensym("getinput");
	static t_symbol* _jit_sym_getoutput = gensym("getoutput");
	static t_symbol* _jit_sym_mindimcount = gensym("mindimcount");
	static t_symbol* _jit_sym_maxdimcount = gensym("maxdimcount");
	static t_symbol* _jit_sym_minplanecount = gensym("minplanecount");
	static t_symbol* _jit_sym_maxplanecount = gensym("maxplanecount");
	static t_symbol* _jit_sym_dimlink = gensym("dimlink");
	static t_symbol* _jit_sym_planelink = gensym("planelink");
	static t_symbol* _jit_sym_mindim = gensym("mindim");
	static t_symbol* _jit_sym_maxdim = gensym("maxdim");
	static t_symbol* _jit_sym_types = gensym("types");
	static t_symbol* _jit_sym_register = gensym("register");

	static t_symbol* _jit_sym_clear = gensym("clear");

	static t_symbol* _jit_sym_jit_attr_offset = gensym("jit_attr_offset");
	static t_symbol* _jit_sym_getinputlist = gensym("getinputlist");
	static t_symbol* _jit_sym_getoutputlist = gensym("getoutputlist");
	static t_symbol* _jit_sym_jit_attr_offset_array = gensym("jit_attr_offset_array");
	static t_symbol* _jit_sym_ioproc = gensym("ioproc");



	struct t_jit_matrix_info {
		long		size = 0;			///< in bytes (0xFFFFFFFF=UNKNOWN)
		t_symbol*	type = nullptr;			///< primitifve type (char, long, float32, or float64)
		long		flags = 0;			///< flags to specify data reference, handle, or tightly packed
		long		dimcount = 0;		///< number of dimensions
		long		dim[JIT_MATRIX_MAX_DIMCOUNT];		///< dimension sizes
		long		dimstride[JIT_MATRIX_MAX_DIMCOUNT]; ///< stride across dimensions in bytes
		long		planecount = 0;		///< number of planes
	};

	typedef t_object 		t_jit_object; 		///< object header @ingroup jitter
	typedef unsigned char	uchar;


	/**
		Provides base pointer and stride for vector operator functions
	 */
	struct t_jit_op_info {
		void*	p;			///< base pointer (coerced to appropriate type)
		long 	stride;		///< stride between elements (in type, not bytes)
	};



	BEGIN_USING_C_LINKAGE



	void* jit_class_new(const char* name, method mnew, method mfree, long size, ...);
	t_jit_err jit_class_register(void* c);
	t_jit_err jit_class_addmethod(void* c, method m, const char* name, ...);
	t_jit_err jit_class_addattr(void* c, t_jit_object* attr);
	t_jit_err jit_class_addadornment(void* c, t_jit_object* o);




	void* max_jit_classex_setup(long oboffset);
	void* jit_class_findbyname(t_symbol* classname);
	t_jit_err max_jit_mop_assist(void* x, void* b, long m, long a, char* s);
	void max_jit_classex_standard_wrap(void* mclass, void* jclass, long flags);

	t_jit_err max_jit_classex_mop_wrap(void* mclass, void* jclass, long flags);		// legacy api
	t_jit_err max_jit_class_mop_wrap(t_class* mclass, t_class* jclass, long flags);	// new api
	t_jit_err max_jit_classex_mop_mproc(void* mclass, void* jclass, void* mproc); //mproc should be method(void* x, void* mop)
	t_jit_err max_jit_mop_setup_simple(void* x, void* o, long argc, t_atom* argv);

	t_jit_err jit_mop_ioproc_copy_adapt(void* mop, void* mop_io, void* matrix);

	t_jit_err jit_mop_single_type(void* x, t_symbol* s);
	t_jit_err jit_mop_single_planecount(void* x, long c);
	t_jit_err jit_mop_input_nolink(void* mop, long c);
	t_jit_err jit_mop_output_nolink(void* mop, long c);
	long max_jit_mop_getoutputmode(void* x);
	void* max_jit_mop_getinput(void* x, long c);
	void* max_jit_mop_getoutput(void* x, long c);

	t_jit_err jit_matrix_info_default(t_jit_matrix_info* info);

	void jit_error_code(void* x,t_jit_err v); //interrupt safe


	void jit_parallel_ndim_simplecalc3(method fn, void* data, long dimcount, long* dim, long planecount, t_jit_matrix_info* minfo1, char* bp1, 
	t_jit_matrix_info* minfo2, char* bp2, t_jit_matrix_info* minfo3, char* bp3, long flags1, long flags2, long flags3);


	void max_jit_mop_free(void* x);
	void max_jit_object_free(void* x); // new api?

	C74_DEPRECATED( void* max_jit_obex_new(void* mc, t_symbol* classname) );
	void* max_jit_object_alloc(t_class* mc, t_symbol* jitter_classname);
	
	C74_DEPRECATED( void max_jit_obex_free(void* x) );
	t_jit_err jit_attr_addfilterset_clip(void* x, double min, double max, long usemin, long usemax);
	void max_jit_attr_args(void* x, short ac, t_atom* av);
	void* max_jit_obex_jitob_get(void* x);

	void* jit_object_alloc(void* c);
	t_jit_object* jit_object_new(t_symbol* classname, ...);
	#ifdef C74_X64
		#define jit_object_new(...) C74_VARFUN(jit_object_new_imp, __VA_ARGS__)
	#endif
	t_jit_object* jit_object_new_imp(void* classname, void* p1, void* p2, void* p3, void* p4, void* p5, void* p6, void* p7, void* p8, void* dummy);
	t_jit_err jit_object_free(void* x);

	// USE THE STANDARD OBJECT_METHOD!
	//void* jit_object_method(void* x, t_symbol* s, ...) JIT_WEAKLINK;
//	void* jit_object_method(void* x, t_symbol* s, ...);
//	#ifdef C74_X64
//		#define jit_object_method(...) C74_VARFUN(c74::max::jit_object_method_imp, __VA_ARGS__)
//	#endif
//	void* jit_object_method_imp(void* x, void* s, void* p1, void* p2, void* p3, void* p4, void* p5, void* p6, void* p7, void* p8);
//	void* jit_object_method_typed(void* x, t_symbol* s, long ac, t_atom* av, t_atom* rv);


	// new t_class API for constructing max wrapper objects using class_new()
	void *max_jit_object_alloc(t_class *mclass, t_symbol *jitter_classname);
	void max_jit_object_free(void *x);
	void max_jit_class_obex_setup(t_class *mclass, long oboffset);
	t_jit_err max_jit_class_addattr(t_class *mclass, void *attr);
	void max_jit_class_wrap_standard(t_class *mclass, t_class *jclass, long flags);
	void max_jit_class_wrap_addmethods(t_class *mclass, t_class *jclass);
	void max_jit_class_wrap_addmethods_flags(t_class *mclass, t_class *jclass, long flags);
	void max_jit_class_wrap_attrlist2methods(t_class *mclass, t_class *jclass);
	void max_jit_class_addmethod_defer(t_class *mclass, method m, char *s);
	void max_jit_class_addmethod_defer_low(t_class *mclass, method m, char *s);
	void max_jit_class_addmethod_usurp(t_class *mclass, method m, char *s);
	void max_jit_class_addmethod_usurp_low(t_class *mclass, method m, char *s);	






	void* jit_object_attach(t_symbol* s, void* x);
	t_jit_err jit_object_detach(t_symbol* s, void* x);

	t_jit_err jit_attr_setlong(void* x, t_symbol* s, t_atom_long c);
	//t_atom_float jit_attr_getfloat(void* x, t_symbol* s);
	t_jit_err jit_attr_setfloat(void* x, t_symbol* s, t_atom_float c);
	//t_symbol* jit_attr_getsym(void* x, t_symbol* s);
	t_jit_err jit_attr_setsym(void* x, t_symbol* s, t_symbol* c);






	void jit_parallel_ndim_simplecalc1(method fn, void *data, long dimcount, long *dim, long planecount, t_jit_matrix_info *minfo1, char *bp1, long flags1);
	void jit_parallel_ndim_simplecalc2(method fn, void *data, long dimcount, long *dim, long planecount, t_jit_matrix_info *minfo1, char *bp1, 
		t_jit_matrix_info *minfo2, char *bp2, long flags1, long flags2);
	void jit_parallel_ndim_simplecalc3(method fn, void *data, long dimcount, long *dim, long planecount, t_jit_matrix_info *minfo1, char *bp1, 
		t_jit_matrix_info *minfo2, char *bp2, t_jit_matrix_info *minfo3, char *bp3, long flags1, long flags2, long flags3);
	void jit_parallel_ndim_simplecalc4(method fn, void *data, long dimcount, long *dim, long planecount, t_jit_matrix_info *minfo1, char *bp1, 
		t_jit_matrix_info *minfo2, char *bp2, t_jit_matrix_info *minfo3, char *bp3, t_jit_matrix_info *minfo4, char *bp4, 
		long flags1, long flags2, long flags3, long flags4);



	END_USING_C_LINKAGE

}} // namespace c74::max
