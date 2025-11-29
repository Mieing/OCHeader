@interface MetalFilterSRTracker : NSObject

@property (nonatomic) double averageCostTime;
@property (nonatomic) double srSuccessRate;
@property (nonatomic) int mSrSharpLevel;
@property (nonatomic) int mSRWidht;
@property (nonatomic) int mSRHeight;
@property (nonatomic) float mSRWRatio;
@property (nonatomic) float mSRHRatio;
@property (nonatomic) long long sumFrameCount;
@property (nonatomic) double sumCostTime;
@property (nonatomic) long long sumSuccessFrameCount;

- (double)getFloatForKey:(long long)a0;
- (int)getIntForKey:(long long)a0;
- (void)setFloatForKey:(double)a0 key:(long long)a1;
- (void)setIntForKey:(int)a0 key:(long long)a1;
- (id)init;
- (void)reset;

@end
