@class AWETrackerDataTransmissionChain, NSString, NSDictionary;

@interface AWETrackerDataTransmissionApplyRecord : NSObject

@property (copy, nonatomic) AWETrackerDataTransmissionChain *chain;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *applyResult;
@property (nonatomic) double applyTimeStamp;
@property (nonatomic) double applyDuration;

+ (id)recordWithEvent:(id)a0 chain:(id)a1 applyResult:(id)a2 applyDuration:(double)a3;

- (id)initWithEvent:(id)a0 chain:(id)a1 applyResult:(id)a2 applyDuration:(double)a3;
- (void).cxx_destruct;

@end
