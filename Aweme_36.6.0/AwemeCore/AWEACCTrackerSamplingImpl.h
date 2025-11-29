@class NSDictionary, NSArray, NSString;

@interface AWEACCTrackerSamplingImpl : NSObject <ACCTrackerSamplingProtocol>

@property (copy, nonatomic) NSDictionary *samplingInfo;
@property (nonatomic) BOOL samplingConfigValid;
@property (copy, nonatomic) NSArray *hundredthSamplingEventList;
@property (nonatomic) BOOL hundredthSamplingDidHitFilter;
@property (nonatomic) BOOL onlyHasHundredthSamplingConfig;
@property (nonatomic) unsigned long long shiftHashUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)samplingAbilityEnable;
- (BOOL)shouldFilterEventWithEventKey:(id)a0;
- (unsigned long long)generateShiftHashUID;
- (BOOL)didHitFilterWithRate:(long long)a0;
- (id)debug_samplingInfo;
- (void).cxx_destruct;
- (id)deviceId;
- (id)init;
- (unsigned long long)random;
- (void)setup;

@end
