@class NSString, AWEPOIFeedPlayerManager;

@interface AWEPOIDetailRouterInterceptor : NSObject <AWERouterDelegate>

@property (nonatomic) BOOL shouldInterceptor;
@property (readonly, nonatomic) BOOL shouldPreventVideoPause;
@property (retain, nonatomic) AWEPOIFeedPlayerManager *feedManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routerDidBeginTransferWithURLString:(id)a0;
- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)processGoodsDetailIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
