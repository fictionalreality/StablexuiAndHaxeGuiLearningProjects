#ifndef INCLUDED_lime_graphics_RendererType
#define INCLUDED_lime_graphics_RendererType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,RendererType)
namespace lime{
namespace graphics{


class RendererType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef RendererType_obj OBJ_;

	public:
		RendererType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.graphics.RendererType","\x27","\x6b","\xac","\x8a"); }
		::String __ToString() const { return HX_HCSTRING("RendererType.","\xd1","\x77","\x2c","\x21") + tag; }

		static ::lime::graphics::RendererType CAIRO;
		static inline ::lime::graphics::RendererType CAIRO_dyn() { return CAIRO; }
		static ::lime::graphics::RendererType CANVAS;
		static inline ::lime::graphics::RendererType CANVAS_dyn() { return CANVAS; }
		static ::lime::graphics::RendererType CONSOLE;
		static inline ::lime::graphics::RendererType CONSOLE_dyn() { return CONSOLE; }
		static ::lime::graphics::RendererType CUSTOM;
		static inline ::lime::graphics::RendererType CUSTOM_dyn() { return CUSTOM; }
		static ::lime::graphics::RendererType DOM;
		static inline ::lime::graphics::RendererType DOM_dyn() { return DOM; }
		static ::lime::graphics::RendererType FLASH;
		static inline ::lime::graphics::RendererType FLASH_dyn() { return FLASH; }
		static ::lime::graphics::RendererType OPENGL;
		static inline ::lime::graphics::RendererType OPENGL_dyn() { return OPENGL; }
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_RendererType */ 
