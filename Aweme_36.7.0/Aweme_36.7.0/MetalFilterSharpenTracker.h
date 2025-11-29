@interface MetalFilterSharpenTracker : NSObject

@property (nonatomic) int mEnableSharpen;
@property (nonatomic) int mEnableSharpenBmf;
@property (nonatomic) int mShapenAlgo;
@property (nonatomic) double mAverageCostTime;
@property (nonatomic) double mSuccessRate;

+ (id)sharedInstance;

- (double)getFloatForKey:(long long)a0;
- (int)getIntForKey:(long long)a0;
- (void)setFloatForKey:(double)a0 key:(long long)a1;
- (void)setIntForKey:(int)a0 key:(long long)a1;
- (id)init;
- (void)reset;

@end
