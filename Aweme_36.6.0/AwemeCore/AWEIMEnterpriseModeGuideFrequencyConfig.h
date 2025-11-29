@class NSString;

@interface AWEIMEnterpriseModeGuideFrequencyConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long intervalHours;
@property (nonatomic) long long maxShownTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
