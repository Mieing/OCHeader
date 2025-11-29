@class NSString;

@interface WCGestureReportInfo : MMObject

@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) NSString *targetGesturePoints;
@property (retain, nonatomic) NSString *sourceGesturePoints;
@property (nonatomic) unsigned int distance;
@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *uxInfo;

+ (id)arrayToString:(id)a0 samplingInterval:(long long)a1;
+ (unsigned int)distanceToInt:(double)a0;

- (id)init;
- (id)toReportString;
- (void).cxx_destruct;

@end
