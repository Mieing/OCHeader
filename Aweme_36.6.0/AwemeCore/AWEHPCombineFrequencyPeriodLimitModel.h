@class NSString;

@interface AWEHPCombineFrequencyPeriodLimitModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long timeLimitSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidWithError:(id *)a0;

@end
