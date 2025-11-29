@class NSMutableDictionary;

@interface CJPayDyPayPreRequestManager : NSObject <CJPayDyPayPreRequestModule>

@property (retain, nonatomic) NSMutableDictionary *preRequestModelDict;

+ (void)registerComponents;
+ (id)sharedInstance;

- (void)i_requestDyPayProcessDataInAdvance:(id)a0;
- (void)i_obtainPreRequestWithConfigModel:(id)a0 completion:(id /* block */)a1;
- (void)p_deleteAllCache;
- (void)p_trackPreRequestWithConfigModel:(id)a0 event:(id)a1 extraParams:(id)a2;
- (void)p_trackBTMCustomWithConfigModel:(id)a0 btm:(id)a1 extraParams:(id)a2;
- (id)p_getPreRequestModelWithConfigModel:(id)a0;
- (void)p_tryHandleFinalPreRequestResult:(id)a0;
- (void)p_startSignOnlyPreRequestWithConfigModel:(id)a0 completion:(id /* block */)a1;
- (void)p_startCreditServicePreRequestWithConfigModel:(id)a0 completion:(id /* block */)a1;
- (void)p_startCommonPayPreRequestWithConfigModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
