@class NSMutableDictionary, NSDictionary, NSString, NSError;

@interface IESLLGDRoutePreRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestParams;
@property (retain, nonatomic) NSDictionary *headerParams;
@property (retain, nonatomic) NSDictionary *ditoDataDic;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long requestState;
@property (copy, nonatomic) NSString *preGeneratedTraceID;
@property (nonatomic) double requestStartTime;
@property (copy, nonatomic) id /* block */ completion;

+ (BOOL)didHitOneStepOptimize;
+ (BOOL)enableRoutePreRequest;
+ (BOOL)didHitPOIPreRequest;
+ (id)shared;

- (void)sendRoutePreRequestWithSchema:(id)a0 preGenId:(id)a1;
- (BOOL)isParamsEqualWithParam:(id)a0 headerParams:(id)a1;
- (id)getProcessedOneStepAbilityRequestParams;
- (id)appendParamsIntoRequestParams:(id)a0;
- (id)buildRequestHeadersWithParams:(id)a0;
- (void)delayClearAllData;
- (BOOL)isEqualDictionaryForDic:(id)a0 andDic:(id)a1;
- (void)sendRoutePreRequestWithSchema:(id)a0;
- (void).cxx_destruct;
- (void)clearAll;

@end
