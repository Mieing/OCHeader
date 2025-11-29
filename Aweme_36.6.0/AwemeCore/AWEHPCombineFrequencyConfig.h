@class NSArray, AWEHPCombineFrequencyPeriodLimitModel, NSString;

@interface AWEHPCombineFrequencyConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *triggerList;
@property (retain, nonatomic) NSArray *interfaceList;
@property (nonatomic) long long fetchInterval;
@property (retain, nonatomic) AWEHPCombineFrequencyPeriodLimitModel *periodLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
