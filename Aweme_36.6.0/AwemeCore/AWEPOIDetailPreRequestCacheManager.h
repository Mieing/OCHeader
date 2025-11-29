@class NSDictionary, NSMutableArray;

@interface AWEPOIDetailPreRequestCacheManager : NSObject

@property (weak, nonatomic) NSDictionary *baseRouterParams;
@property (retain, nonatomic) NSDictionary *gdRequestParams;
@property (retain, nonatomic) NSDictionary *actualRequestParams;
@property (retain, nonatomic) NSDictionary *originCJInfo;
@property (retain, nonatomic) NSDictionary *preRequestCacheData;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) NSMutableArray *completions;

+ (id)sharedInstance;

- (id)getCJSharkInfo;
- (void)saveOneStepConfirmDataWithRequestParams:(id)a0 routerParams:(id)a1;
- (BOOL)isEqualDictionaryForDic:(id)a0 andDic:(id)a1;
- (void)doSettingsItemRequest:(id)a0;
- (BOOL)shouldRequestWithConfig:(id)a0;
- (id)generateRequestParamsWithConfig:(id)a0;
- (id)consumeGDPreRequestData;
- (id)generateDictionaryWithCommonQuery:(id)a0 blackList:(id)a1;
- (BOOL)checkGDReqParamsIsEquals:(id)a0;
- (BOOL)isFetchingGDRequest;
- (void)addGDRequestCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
