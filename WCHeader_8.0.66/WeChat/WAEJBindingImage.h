@class NSString, WAEJTexture, NSThread, NSOperation, NSMutableArray;

@interface WAEJBindingImage : WAEJBindingEventedBase <EJDrawable, EJEnterForegroundDelegate> {
    NSString *path;
    BOOL loading;
    NSOperation *loadCallback;
    BOOL originPixels;
    NSMutableArray *_paths;
    BOOL _newInstance;
    NSThread *_thread;
    double _resize_width;
    double _resize_height;
    double _rescale;
    unsigned int bindingScreenId;
}

@property (nonatomic) BOOL needCheckQueue;
@property (readonly, nonatomic) WAEJTexture *texture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void *)_ptr_to_func___uid;
+ (void *)_ptr_to_get_src;
+ (void *)_ptr_to_func_getSrc;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_set_scale;
+ (void *)_ptr_to_get_scale;
+ (void *)_ptr_to_set_src;
+ (void *)_ptr_to_func_setSrc;
+ (void *)_ptr_to_func___id;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_naturalWidth;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_get_naturalHeight;
+ (void *)_ptr_to_get_complete;
+ (void *)_ptr_to_set_premultiplyAlpha;
+ (void *)_ptr_to_get_premultiplyAlpha;
+ (void *)_ptr_to_set_bindingScreen;
+ (void *)_ptr_to_get_bindingScreen;
+ (id)_const_nodeName;
+ (id)_const_tagName;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (void)createWithJSObject:(struct OpaqueJSValue { } *)a0 scriptView:(id)a1;
- (void)beginLoad;
- (void)prepareGarbageCollection;
- (void)dealloc;
- (void)onEnterForeground;
- (void)internalEnterForeground;
- (void)endLoad;
- (void)internalEndLoad;
- (void)triggerEvent:(id)a0;
- (void)setTexture:(id)a0 path:(id)a1;
- (struct OpaqueJSValue { } *)_func___uid:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_get_src:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_func_getSrc:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_get_instance:(struct OpaqueJSContext { } *)a0;
- (void)checkQueue;
- (void)setImageSrc:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1;
- (void)_set_scale:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_scale:(struct OpaqueJSContext { } *)a0;
- (void)_set_src:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_func_setSrc:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func___id:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)getWidth:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_width:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_naturalWidth:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)getHeight:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_height:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_naturalHeight:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_complete:(struct OpaqueJSContext { } *)a0;
- (void)_set_premultiplyAlpha:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_premultiplyAlpha:(struct OpaqueJSContext { } *)a0;
- (void)_set_bindingScreen:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_bindingScreen:(struct OpaqueJSContext { } *)a0;

@end
