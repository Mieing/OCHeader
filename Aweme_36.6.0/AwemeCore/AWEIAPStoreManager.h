@class NSString, NSMutableDictionary;
@protocol AWEIAPStoreManagerDelegate, AWEYAPModuleService;

@interface AWEIAPStoreManager : NSObject <AWEYAPIAPStoreDelegateProtocol, AWEYAPManagerBizDelegateProtocol>

@property (retain, nonatomic) id<AWEYAPModuleService> payService;
@property (weak, nonatomic) id<AWEIAPStoreManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *productsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationParamsWithProduct:(id)a0 resultType:(long long)a1 isRecharge:(BOOL)a2 error:(id)a3;
+ (id)trackParamsWithProduct:(id)a0 resultType:(long long)a1 isRecharge:(BOOL)a2 error:(id)a3;
+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)startupService;
- (void)startIAPWithParams:(id)a0;
- (void)preloadIAPProductsWithIDList:(id)a0 finishBlock:(id /* block */)a1;
- (void)payFinishWithProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (BOOL)shouldHandleThisIapID:(id)a0;
- (void)didFinishProductOrder:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void)didFinishProductOrderInBack:(id)a0 resultType:(long long)a1 error:(id)a2;
- (BOOL)shouldHandleProduct:(id)a0;
- (id)businessIdentify:(id)a0;
- (BOOL)allowNewBuyingWithUnconfirmedProduct:(id)a0 newBuyingProductID:(id)a1 newOrderParams:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
