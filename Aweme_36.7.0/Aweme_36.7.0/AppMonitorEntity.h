@class NSLock, AppMonitorMeasureValueSet, NSMutableArray;

@interface AppMonitorEntity : NSObject

@property (nonatomic) long long count;
@property (nonatomic) long long noise;
@property (retain, nonatomic) AppMonitorMeasureValueSet *measureValues;
@property (retain, nonatomic) NSMutableArray *measureValuesArray;
@property (retain, nonatomic) NSLock *lock;
@property BOOL isDetail;

- (void)incrCount;
- (void)incrNoise;
- (void)merge:(id)a0 metric:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
