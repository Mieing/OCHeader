@class AWETrackerDictionary, NSObject;

@interface AWETrackerPassthroughApplyConfig : NSObject

@property (retain, nonatomic) NSObject *actualTransmissionObj;
@property (retain, nonatomic) AWETrackerDictionary *trackerContext;
@property (nonatomic) BOOL shouldApplyTransmission;
@property (nonatomic) BOOL shouldApplyAspect;

+ (id)configWithTransmissionObj:(id)a0;
+ (id)config;

- (void).cxx_destruct;
- (id)init;

@end
