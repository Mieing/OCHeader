@class NSString, TIMXSDKInstance;

@interface TIMXECOMConversationStoreInterface : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id realTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)resolveClassMethod:(SEL)a0;

- (void)notImplFunc;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
