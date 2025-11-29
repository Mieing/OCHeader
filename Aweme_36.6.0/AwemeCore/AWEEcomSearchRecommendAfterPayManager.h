@class BDXBridgeEventSubscriber, UIViewController;

@interface AWEEcomSearchRecommendAfterPayManager : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (weak, nonatomic) UIViewController *productDetailVC;

+ (id)sharedInstance;

- (void)sendRequestWithURL:(id)a0 params:(id)a1 response:(id /* block */)a2 completion:(id /* block */)a3;
- (void)subscribePayEvent;
- (void)handlePaySuccessMsg:(id)a0;
- (BOOL)isSearchResultVC:(id)a0;
- (id)topSearchResultVC;
- (void)sendRecommendRequestWithParam:(id)a0 completion:(id /* block */)a1;
- (void)removeProductDetailIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
