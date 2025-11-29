@class DIRSEventComparator, NSArray, NSDictionary, DIRSEventSamplingSubject;

@interface DIRSEventSamplingUnit : NSObject

@property (nonatomic) long long samplingMethod;
@property (nonatomic) long long samplingRate;
@property (retain, nonatomic) DIRSEventComparator *comparator;
@property (readonly) NSArray *events;
@property (readonly) NSDictionary *eventParamKeys;
@property (readonly) NSDictionary *eventParamKeyValues;
@property (weak, nonatomic) DIRSEventSamplingSubject *subject;

+ (id)unitWithDictionary:(id)a0;

- (BOOL)isEventHit:(id)a0;
- (BOOL)isEventHit:(id)a0 withProps:(id)a1;
- (BOOL)_isHitEventSampling;
- (void).cxx_destruct;
- (void)_load:(id)a0;

@end
