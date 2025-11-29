@interface WAEJBindingWindowEvents : WAEJBindingEventedBase <EJWindowEventsDelegate>

+ (void *)_ptr_to_get_onpagehide;
+ (void *)_ptr_to_set_onpagehide;
+ (void *)_ptr_to_get_onpageshow;
+ (void *)_ptr_to_set_onpageshow;
+ (void *)_ptr_to_get_onresize;
+ (void *)_ptr_to_set_onresize;

- (void)createWithJSObject:(struct OpaqueJSValue { } *)a0 scriptView:(id)a1;
- (void)pause;
- (void)resume;
- (void)resize;

@end
