@class NSString, NSMutableDictionary, _TtC21AWEMusicStreamingImpl26LunaPurchOfferResponseInfo;
@protocol AWEMusicCommerceService;

@interface LunaIAPManager : HTSService <AWEMusicIAPServiceDelegate, AWEMusicIAPService>

@property (nonatomic) BOOL hasTriggerSetup;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (nonatomic) BOOL buying;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) double settleStartTime;
@property (retain, nonatomic) id<AWEMusicCommerceService> commerceService;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl26LunaPurchOfferResponseInfo *purchOfferResponse;
@property (retain, nonatomic) NSMutableDictionary *productsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUserCancel:(id)a0;
+ (void)buyInMainQueueOffer:(id)a0 itemType:(long long)a1 itemID:(id)a2 quantity:(long long)a3 offerV2:(id)a4 scene:(id)a5 checkLogin:(BOOL)a6 extra:(id)a7 completion:(id /* block */)a8;
+ (id)shared;

- (void)startupService;
- (void)startIAPWithParams:(id)a0;
- (void)preloadIAPProductsWithIDList:(id)a0 finishBlock:(id /* block */)a1;
- (BOOL)shouldHandleThisIapID:(id)a0;
- (BOOL)isUserCancel:(id)a0;
- (void)buyOffer:(id)a0 itemType:(long long)a1 itemID:(id)a2 quantity:(long long)a3 checkLogin:(BOOL)a4 extra:(id)a5 completion:(id /* block */)a6;
- (void)orderOfferID:(id)a0 itemType:(long long)a1 itemID:(id)a2 quantity:(long long)a3 logExtra:(id)a4 callback:(id /* block */)a5;
- (void)p_etReportSettleLogProduct:(id)a0 duration:(double)a1 error:(id)a2 fromBackground:(BOOL)a3 logExtra:(id)a4;
- (id)uidWrapperKey;
- (void)validateOrder:(id)a0 settleCode:(long long)a1 error:(id)a2 product:(id)a3 logExtra:(id)a4 retry:(long long)a5 callback:(id /* block */)a6;
- (void)p_etReportCreateOrderSuccess:(BOOL)a0 duration:(double)a1 orderStatus:(long long)a2 orderCreateStatus:(long long)a3 error:(id)a4 logExtra:(id)a5;
- (void)p_etReportValidateResultSuccess:(BOOL)a0 duration:(double)a1 purchPrice:(double)a2 settleCode:(long long)a3 orderStatusCode:(long long)a4 orderCreateStatusCode:(long long)a5 retry:(long long)a6 error:(id)a7 logId:(id)a8 logExtra:(id)a9;
- (void)settleFinishWithProduct:(id)a0 error:(id)a1 inBack:(BOOL)a2;
- (void)buyInMainQueueOffer:(id)a0 itemType:(long long)a1 itemID:(id)a2 quantity:(long long)a3 checkLogin:(BOOL)a4 extra:(id)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;

@end
