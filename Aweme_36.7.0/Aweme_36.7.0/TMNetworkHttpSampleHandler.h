@class NSString, NSDictionary;

@interface TMNetworkHttpSampleHandler : NSObject

@property (copy, nonatomic) NSString *headerKey;
@property (copy, nonatomic) NSDictionary *globalConfig;
@property (copy, nonatomic) NSDictionary *conditionConfig;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (unsigned long long)pathConditionSampleRateWithPath:(id)a0 host:(id)a1;
- (unsigned long long)modeConditionSampleRate;
- (BOOL)isCurrentMode:(id)a0;
- (id)httpSampleWithContext:(id)a0;
- (void).cxx_destruct;

@end
