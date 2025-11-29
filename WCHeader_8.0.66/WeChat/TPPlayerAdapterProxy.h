@class TPEventTrackingPublisher, TPPlayerAdapter, TPPlayerAdapterProxyDelegate;
@protocol ITPPlayerBaseDelegate;

@interface TPPlayerAdapterProxy : NSProxy

@property (retain, nonatomic) TPPlayerAdapter *playerAdapter;
@property (weak, nonatomic) id<ITPPlayerBaseDelegate> outerDelegate;
@property (retain, nonatomic) TPPlayerAdapterProxyDelegate *proxyDelegate;
@property (retain, nonatomic) TPEventTrackingPublisher *eventTrackingPublisher;

- (id)initTPPlayerAdapterProxy:(id)a0 withContext:(id)a1;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)hookDelegateIfNeed:(id)a0;
- (void)pushEventWithNestedInvocation:(id)a0;
- (void).cxx_destruct;

@end
