@class NSMutableDictionary;

@interface BDPolicyStrategyErrorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *customStrategyDict;

+ (id)sharedInstance;

- (void)addCustomErrorStrategy:(id)a0 forSpace:(id)a1 inUnit:(Class)a2 withErrorCode:(long long)a3;
- (id)customErrorStrategyForCert:(id)a0 inUnit:(Class)a1 withErrorCode:(long long)a2;
- (unsigned long long)mapAbnormalCertStrategyToErrorLevel:(unsigned long long)a0;
- (unsigned long long)errorLevelForCert:(id)a0 inUnit:(Class)a1 errorCode:(long long)a2;
- (id)errorStrategyIdForSpaceId:(id)a0 unit:(Class)a1 errorCode:(long long)a2;
- (void)removeAllCustomStrategy;
- (void).cxx_destruct;
- (id)init;

@end
