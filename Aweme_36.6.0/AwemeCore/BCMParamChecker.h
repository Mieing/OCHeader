@class NSDictionary, NSArray;

@interface BCMParamChecker : NSObject

@property (class, readonly) BCMParamChecker *shared;

@property BOOL configReady;
@property BOOL configChecking;
@property (copy, nonatomic) NSDictionary *pageCheckInfo;
@property (copy, nonatomic) NSDictionary *unitCheckInfo;
@property (copy, nonatomic) NSDictionary *unitCCheckInfo;
@property (copy, nonatomic) NSArray *ignoreCheckBtmList;
@property (copy, nonatomic) NSArray *ignoreCheckBcmTypeParamsList;
@property (copy, nonatomic) NSArray *shouldCheckBcmParams;
@property (copy, nonatomic) NSDictionary *extraRuleInfo;
@property BOOL checkEnabled;
@property (copy, nonatomic) id /* block */ paramCheckHandler;

- (id)getEnumBstFormInfo:(id)a0;
- (void)convertDataFromJsonDict:(id)a0;
- (void)fetchDataFromNetwork:(id /* block */)a0;
- (void)convertGeckoToConfigPath:(id)a0;
- (BOOL)matchVersionFromVersionList:(id)a0;
- (void)updateParamCheckConfigIfNeed;
- (id)formatBtm:(id)a0 host:(id)a1 withCheckType:(long long)a2;
- (id)simpleCheckBcmParams:(id)a0 checkType:(long long)a1 btm:(id)a2;
- (void)reportWithErrorList:(id)a0 btm:(id)a1 errorCode:(id)a2 extraRule:(id)a3 showId:(id)a4;
- (void)checkExtraRulesWithBtm:(id)a0 checkType:(long long)a1 originParams:(id)a2 showId:(id)a3;
- (id)formatErrorInfoWithErrorList:(id)a0 btm:(id)a1 extraRule:(id)a2;
- (id)formatErrorInfoForAppLogWithErrorList:(id)a0;
- (BOOL)checkBtmIsInConfig:(id)a0 checkType:(long long)a1;
- (id)getConfigParamsWithBtm:(id)a0 checkType:(long long)a1;
- (id)checkOriginParams:(id)a0 withConfigParamsList:(id)a1;
- (BOOL)checkValueType:(id)a0 expectValueType:(long long)a1;
- (id)ecomEnumBstFormInfoFrom:(id)a0;
- (void)checkBcmParamsAndReportWithBtm:(id)a0 host:(id)a1 checkType:(long long)a2 originParams:(id)a3;
- (id)checkBcmKey:(id)a0 api:(id)a1 responder:(id)a2;
- (void).cxx_destruct;

@end
