@class NSString;

@interface FurionSmartServiceBlockTimeFilterItem : NSObject

@property (retain, nonatomic) NSString *startTime;
@property (retain, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) float threshold;

- (void).cxx_destruct;

@end
