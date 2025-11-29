@class WAEJJavaScriptView;

@interface WAEJBindingBase : NSObject {
    struct OpaqueJSValue { } *jsObject;
    unsigned int uid_;
    BOOL isJsObjectValid;
}

@property (readonly, nonatomic) WAEJJavaScriptView *scriptView;
@property (nonatomic) unsigned int ownerId;

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 instance:(id)a2;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (void)createWithJSObject:(struct OpaqueJSValue { } *)a0 scriptView:(id)a1;
- (void)dealloc;
- (void)prepareGarbageCollection;
- (void)resetJSObject;
- (BOOL)isPaused;

@end
