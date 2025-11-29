@protocol BDATMStaticValueProtocol;

@interface BDATMManager : NSObject

@property (copy, nonatomic) id /* block */ networkRequestHandler;
@property (copy, nonatomic) id /* block */ trackHandler;
@property (copy, nonatomic) id /* block */ adTrackHandler;
@property (copy, nonatomic) id /* block */ aLogHandler;
@property (copy, nonatomic) id /* block */ uploadLogHandler;
@property (nonatomic) BOOL isAlogEnabled;
@property (nonatomic) BOOL isUploadLogEnabled;
@property (nonatomic) long long uploadDuration;
@property (nonatomic) BOOL isAPPLogHookEnabled;
@property (retain, nonatomic) id<BDATMStaticValueProtocol> staticValueImpl;

+ (id)ruleHitted:(id)a0 withParams:(id)a1;
+ (id)hitSamplingWithRuleContent:(id)a0;
+ (id)hitSamplingWithRuleContent:(id)a0 eventName:(id)a1;
+ (id)variableKeyofParams:(id)a0 variableKeyValue:(id)a1;
+ (id)assembleParams:(id)a0 eventName:(id)a1 rule:(id)a2;
+ (id)shared;

- (void)setupWithConfig:(id)a0;
- (void)sendAdEventWithLabel:(id)a0 refer:(id)a1 tag:(id)a2 rawRules:(id)a3;
- (void)registerGeckoAccesskey:(id)a0;
- (void)requestAutoRulesWithParams:(id)a0 completion:(id /* block */)a1;
- (void)readRulesFromLocal;
- (void)sendEventForCopyWithOriginParams:(id)a0 dynamicParams:(id)a1 contentParams:(id)a2;
- (id)parseRawRules:(id)a0 error:(id *)a1;
- (id)cidWithRawValue:(id)a0;
- (id)eventNameOfExtraParams:(id)a0;
- (id)tagOfExtraParams:(id)a0;
- (id)eventNameOfV3:(id)a0;
- (void)sendUserEvent:(id)a0 rawRules:(id)a1;
- (void)sendEventWithCommonParams:(id)a0 extraParams:(id)a1 dynamicParams:(id)a2 completion:(id /* block */)a3;
- (void)sendEventV3WithCommonParams:(id)a0 extraParams:(id)a1 dynamicParams:(id)a2 completion:(id /* block */)a3;
- (void)registerNetworkRequestHandler:(id /* block */)a0;
- (void)registerTrackHandler:(id /* block */)a0;
- (void)registerAdTrackHandler:(id /* block */)a0;
- (void)registerAlogHandler:(id /* block */)a0;
- (void)registerLogUploadHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isValidValue:(id)a0;

@end
