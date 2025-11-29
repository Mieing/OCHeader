@class NSString;

@interface AWEGeneralColdLaunchLandingFrequencyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *configId;
@property (copy, nonatomic) NSString *periodTime;
@property (nonatomic) long long periodLandingCount;
@property (nonatomic) long long allLandingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfigId:(id)a0 periodTime:(id)a1 periodLandingCount:(long long)a2 allLandingCount:(long long)a3;
- (void).cxx_destruct;

@end
