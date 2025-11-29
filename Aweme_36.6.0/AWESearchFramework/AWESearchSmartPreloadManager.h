@class NSString, NSMutableArray, AWESearchCommonPreloadManager;

@interface AWESearchSmartPreloadManager : NSObject

@property (nonatomic) BOOL isWaitingBizData;
@property (retain, nonatomic) AWESearchCommonPreloadManager *preloadManager;
@property (retain, nonatomic) NSMutableArray *cardListArray;
@property (retain, nonatomic) NSMutableArray *preloadItemsArray;
@property (retain, nonatomic) NSMutableArray *needPreloadItems;
@property (retain, nonatomic) NSMutableArray *alertMsgArray;
@property (nonatomic) double pitayaStartTime;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ getCardsListBlock;

- (void)setHostVC:(id)a0;
- (void)setupSubscriber;
- (void)publishGetCardBizDataEvent;
- (BOOL)p_isLogin;
- (void)appendAlertMsgString:(id)a0;
- (void)runPitayaTask;
- (void)handlePreLoadTaskWithParams:(id)a0;
- (void)preloadPOIWithPOIID:(id)a0;
- (void)preloadGoodDetailWithPOIID:(id)a0 spuID:(id)a1;
- (id)billSchemaWithPOIID:(id)a0 spuID:(id)a1;
- (void)preloadBillDetailWithPOIID:(id)a0 spuID:(id)a1;
- (void)preloadBillsDataIfNeededWithPoiID:(id)a0 billsInfo:(id)a1;
- (id)p_poiModelWithPOIID:(id)a0;
- (void)publishFEBillPreloadEventWithParams:(id)a0;
- (id)p_spuModelWithPOIModel:(id)a0 spuID:(id)a1;
- (id)p_billModelWithPOIModel:(id)a0 spuID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)resetData;
- (void)showAlert;

@end
