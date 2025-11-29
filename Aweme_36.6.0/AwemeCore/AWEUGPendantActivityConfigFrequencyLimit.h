@class NSDictionary, NSString;

@interface AWEUGPendantActivityConfigFrequencyLimit : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long frequencyLimitType;
@property (nonatomic) long long daysWindow;
@property (nonatomic) long long maxClose;
@property (nonatomic) long long daysNoShow;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
