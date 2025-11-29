@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AWECPUDataConsumer : NSObject

@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) double maxPercentage;
@property (nonatomic) double minPercentage;
@property (nonatomic) double area;
@property (nonatomic) double launchArea;
@property (nonatomic) long long interval;
@property (nonatomic) long long windowSize;
@property (retain, nonatomic) NSMutableArray *window;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSArray *levelBoundary;
@property (nonatomic) BOOL shouldReport;
@property (nonatomic) BOOL shouldPredict;
@property (retain, nonatomic) NSMutableDictionary *predictedCPULevelDic;

- (void)calculatePredictedCPULevel:(double)a0 level:(double)a1 gpu:(double)a2 batteryLevel:(double)a3 batteryState:(double)a4 usedMemory:(double)a5 availableMemory:(double)a6 threadCount:(double)a7 lowPowerMode:(double)a8 BDAnimationCount:(double)a9;
- (void)consumeCPUData:(double)a0 threadCount:(long long)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
