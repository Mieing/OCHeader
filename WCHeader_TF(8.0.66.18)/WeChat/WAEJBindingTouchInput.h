@class NSString, NSArray, NSMutableSet;

@interface WAEJBindingTouchInput : WAEJBindingEventedBase <EJTouchDelegate> {
    struct OpaqueJSString { } *jsLengthName;
    struct OpaqueJSString { } *jsTargetName;
    struct OpaqueJSString { } *jsIdentifierName;
    struct OpaqueJSString { } *jsTouchForce;
    struct OpaqueJSString { } *jsTouchMaxForce;
    struct OpaqueJSString { } *jsPageXName;
    struct OpaqueJSString { } *jsPageYName;
    struct OpaqueJSString { } *jsClientXName;
    struct OpaqueJSString { } *jsClientYName;
    struct OpaqueJSString { } *jsOffsetXName;
    struct OpaqueJSString { } *jsOffsetYName;
    struct OpaqueJSValue *jsTouchesPool[16];
    struct OpaqueJSValue { } *jsTouchTarget;
    unsigned long long touchesInPool;
    unsigned int screenCanvasId;
    NSArray *sortDescriptors;
    NSMutableSet *touchIdSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void *)_ptr_to_get_ontouchstart;
+ (void *)_ptr_to_set_ontouchstart;
+ (void *)_ptr_to_get_ontouchend;
+ (void *)_ptr_to_set_ontouchend;
+ (void *)_ptr_to_get_ontouchmove;
+ (void *)_ptr_to_set_ontouchmove;
+ (void *)_ptr_to_get_ontouchcancel;
+ (void *)_ptr_to_set_ontouchcancel;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (BOOL)isScreenCanvasMode;
- (void)createWithJSObject:(struct OpaqueJSValue { } *)a0 scriptView:(id)a1;
- (void)dealloc;
- (void)triggerEvent:(id)a0 timestamp:(double)a1 all:(id)a2 changed:(id)a3 remaining:(id)a4;
- (void)postEvent:(id)a0;
- (unsigned long long)pointInside:(struct CGPoint { double x0; double x1; })a0;

@end
