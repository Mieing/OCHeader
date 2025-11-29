@class NSString, SKStoreProductViewController, WCSKAdNetworkItem, UIViewController;

@interface MMProductController : NSObject <SKStoreProductViewControllerDelegate>

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) WCSKAdNetworkItem *skAdItem;
@property (copy, nonatomic) NSString *callbackUrl;
@property (retain, nonatomic) UIViewController *pushViewController;
@property (retain, nonatomic) SKStoreProductViewController *productViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailable;
+ (id)sharedControllerWithProductId:(id)a0 callbackUrl:(id)a1;
+ (id)sharedControllerWithProductId:(id)a0 skAdItem:(id)a1 callbackUrl:(id)a2;
+ (void)dismissProductController;

- (id)initWithProductId:(id)a0 skAdItem:(id)a1 callbackUrl:(id)a2;
- (void)showInViewController:(id)a0;
- (void)openProductViewController;
- (void)productViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;

@end
