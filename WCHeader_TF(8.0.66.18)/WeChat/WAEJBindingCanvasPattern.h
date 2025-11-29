@class WAEJCanvasPattern;

@interface WAEJBindingCanvasPattern : WAEJBindingBase {
    WAEJCanvasPattern *pattern;
}

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 pattern:(id)a2;
+ (id)patternFromJSValue:(struct OpaqueJSValue { } *)a0;
+ (id)patternFromInstance:(unsigned long long)a0;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get___type;

- (void)dealloc;
- (struct OpaqueJSValue { } *)_get_instance:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get___type:(struct OpaqueJSContext { } *)a0;

@end
