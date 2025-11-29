@class TPDataTransportManagerProxyDelegate, TPProxyPlayManager, TPPlayerEventPublisher;
@protocol TPProxyPlayDelegate;

@interface TPDataTransportManagerProxy : NSProxy

@property (retain, nonatomic) TPProxyPlayManager *manager;
@property (weak, nonatomic) id<TPProxyPlayDelegate> outerDelegate;
@property (retain, nonatomic) TPDataTransportManagerProxyDelegate *proxyDelegate;
@property (retain, nonatomic) TPPlayerEventPublisher *publisher;

- (id)initDataTransportManagerProxy:(id)a0 withContext:(id)a1;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)hookDelegateIfNeed:(id)a0;
- (void)pushEventAfterInvokeIfNeed:(id)a0;
- (void).cxx_destruct;

@end
