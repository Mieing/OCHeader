@class NSString;

@interface AWEGeneralColdLaunchLandingFrequencyConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long period;
@property (nonatomic) long long limitLandingCountsInPeriod;
@property (nonatomic) long long limitLandingCountsInAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
