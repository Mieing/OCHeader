@class NSDictionary, NSArray;

@interface HMDFrameDropRecord : HMDMonitorRecord

@property (retain, nonatomic) NSDictionary *frameDropInfo;
@property (copy, nonatomic) NSArray *originDropArray;
@property (nonatomic) double slidingTime;
@property (nonatomic) struct CGPoint { double x; double y; } touchReleasedVelocity;
@property (nonatomic) struct CGPoint { double x; double y; } targetScrollDistance;
@property (nonatomic) unsigned long long refreshRate;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isLowPowerMode;
@property (nonatomic) BOOL isEvilMethod;
@property (nonatomic) double blockDuration;
@property (nonatomic) long long blockCount;
@property (copy, nonatomic) NSDictionary *customExtra;
@property (nonatomic) double duration;
@property (nonatomic) double hitchDuration;
@property (copy, nonatomic) NSDictionary *hitchDurDic;

+ (id)aggregateDataWithRecords:(id)a0;
+ (void)setupFilterFromFilter:(id)a0 toDataDict:(id)a1;

- (BOOL)needAggregate;
- (void).cxx_destruct;
- (id)reportDictionary;

@end
