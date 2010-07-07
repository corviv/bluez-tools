
#ifndef __g_cclosure_bluez_marshal_MARSHAL_H__
#define __g_cclosure_bluez_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:STRING,BOXED (lib/marshallers.list:1) */
extern void g_cclosure_bluez_marshal_VOID__STRING_BOXED (GClosure     *closure,
                                                         GValue       *return_value,
                                                         guint         n_param_values,
                                                         const GValue *param_values,
                                                         gpointer      invocation_hint,
                                                         gpointer      marshal_data);

/* BOOLEAN:BOXED,UINT,UCHAR,POINTER (lib/marshallers.list:2) */
extern void g_cclosure_bluez_marshal_BOOLEAN__BOXED_UINT_UCHAR_POINTER (GClosure     *closure,
                                                                        GValue       *return_value,
                                                                        guint         n_param_values,
                                                                        const GValue *param_values,
                                                                        gpointer      invocation_hint,
                                                                        gpointer      marshal_data);

/* BOOLEAN:BOXED,STRING,POINTER (lib/marshallers.list:3) */
extern void g_cclosure_bluez_marshal_BOOLEAN__BOXED_STRING_POINTER (GClosure     *closure,
                                                                    GValue       *return_value,
                                                                    guint         n_param_values,
                                                                    const GValue *param_values,
                                                                    gpointer      invocation_hint,
                                                                    gpointer      marshal_data);

/* BOOLEAN:POINTER (lib/marshallers.list:4) */
extern void g_cclosure_bluez_marshal_BOOLEAN__POINTER (GClosure     *closure,
                                                       GValue       *return_value,
                                                       guint         n_param_values,
                                                       const GValue *param_values,
                                                       gpointer      invocation_hint,
                                                       gpointer      marshal_data);

/* BOOLEAN:BOXED,POINTER,POINTER (lib/marshallers.list:5) */
extern void g_cclosure_bluez_marshal_BOOLEAN__BOXED_POINTER_POINTER (GClosure     *closure,
                                                                     GValue       *return_value,
                                                                     guint         n_param_values,
                                                                     const GValue *param_values,
                                                                     gpointer      invocation_hint,
                                                                     gpointer      marshal_data);

/* BOOLEAN:BOXED,UINT,POINTER (lib/marshallers.list:6) */
extern void g_cclosure_bluez_marshal_BOOLEAN__BOXED_UINT_POINTER (GClosure     *closure,
                                                                  GValue       *return_value,
                                                                  guint         n_param_values,
                                                                  const GValue *param_values,
                                                                  gpointer      invocation_hint,
                                                                  gpointer      marshal_data);

/* BOOLEAN:STRING,POINTER (lib/marshallers.list:7) */
extern void g_cclosure_bluez_marshal_BOOLEAN__STRING_POINTER (GClosure     *closure,
                                                              GValue       *return_value,
                                                              guint         n_param_values,
                                                              const GValue *param_values,
                                                              gpointer      invocation_hint,
                                                              gpointer      marshal_data);

G_END_DECLS

#endif /* __g_cclosure_bluez_marshal_MARSHAL_H__ */
