@class NSString, NSArray, NSDictionary, AWETrackerDictionary;

@interface AWETrackerAspectApplyRecord : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSArray *aspects;
@property (copy, nonatomic) AWETrackerDictionary *trackerContext;
@property (copy, nonatomic) NSDictionary *applyResult;
@property (nonatomic) double applyTimeStamp;
@property (nonatomic) double applyDuration;

+ (id)recordWithEvent:(id)a0 aspects:(id)a1 trackerContext:(id)a2 applyResult:(id)a3 applyTimeStamp:(double)a4 applyDuration:(double)a5;

- (id)initWithEvent:(id)a0 aspects:(id)a1 trackerContext:(id)a2 applyResult:(id)a3 applyTimeStamp:(double)a4 applyDuration:(double)a5;
- (void).cxx_destruct;

@end
