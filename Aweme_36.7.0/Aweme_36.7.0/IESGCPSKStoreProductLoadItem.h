@class NSString, SKStoreProductViewController;

@interface IESGCPSKStoreProductLoadItem : NSObject <SKStoreProductViewControllerDelegate>

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (retain, nonatomic) SKStoreProductViewController *storeProductVC;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0;
- (void)openStoreProductByController:(id)a0 presentCompletion:(id /* block */)a1 dismissCompletion:(id /* block */)a2;
- (void)loadStoreProductWithCompletion:(id /* block */)a0;
- (id)productParametersWithAppId:(id)a0;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;

@end
