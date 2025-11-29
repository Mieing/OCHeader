@class NSString, NSNumber;

@interface LynxPerformanceMetric : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSString *startTimestampName;
@property (retain, nonatomic) NSNumber *startTimestamp;
@property (retain, nonatomic) NSString *endTimestampName;
@property (retain, nonatomic) NSNumber *endTimestamp;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
