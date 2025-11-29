@class NSString, NSArray;

@interface AWETrackerDataTransmissionChain : NSObject <NSCopying>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSArray *transmissionObjs;
@property (nonatomic) double applyTimeStamp;

- (id)initWithEvent:(id)a0 array:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
