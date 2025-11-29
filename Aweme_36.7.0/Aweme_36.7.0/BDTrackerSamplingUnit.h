@class NSArray, NSDictionary;

@interface BDTrackerSamplingUnit : NSObject

@property (nonatomic) long long samplingMethod;
@property (nonatomic) long long samplingRate;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSDictionary *eventParamKeys;
@property (retain, nonatomic) NSDictionary *eventParamKeyValues;

+ (id)unitWithDictionary:(id)a0;

- (id)initWithDictioanry:(id)a0;
- (void)loadDictionary:(id)a0;
- (BOOL)_samplingParticipate:(id)a0 withParameters:(id)a1;
- (BOOL)_samplingHit:(id)a0;
- (BOOL)hitSampling:(id)a0 withParameters:(id)a1 caliber:(id)a2;
- (void).cxx_destruct;

@end
