@protocol IESLiveDIContext;

@interface IESLiveBaseAdapter : NSObject

@property (class, readonly, nonatomic) BOOL weakTargetEnable;
@property (class, readonly, nonatomic) BOOL preDIOptEnable;

@property (retain, nonatomic) id target;
@property (weak, nonatomic) id weakTarget;
@property (retain, nonatomic) id<IESLiveDIContext> attachingDIContext;

+ (id)adapterWithProtocolName:(id)a0 attachingDI:(id)a1;
+ (id)adapterWithTarget:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (id)targetInstance;
- (id)selectorWhitelist;
- (void)liveAdapterUnrecognizedSeletor:(SEL)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)whitelist;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
