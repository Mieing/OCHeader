@class NSArray;

@interface MMLiveUIPerfStatisticPeriodResult : NSObject

@property (retain, nonatomic) NSArray *blurPerfStatResultList;
@property (retain, nonatomic) NSArray *uiAnimPerfStatResultList;
@property (retain, nonatomic) NSArray *pagAnimPerfStatResultList;

+ (int)getMaxRecordCntInPeriod:(double)a0 fromStatResults:(id)a1;
+ (double)getPersistTimePercentInPeriod:(double)a0 fromStatResults:(id)a1;
+ (double)getMaxComposeAreaPercentInPeriod:(double)a0 fromStatResults:(id)a1;
+ (double)getMaxAnimFrameRateInPeriod:(double)a0 fromStatResults:(id)a1;
+ (double)getMaxAverAnimFrameRateInPeriod:(double)a0 fromStatResults:(id)a1;
+ (double)getAverAnimFrameRateInPeriod:(double)a0 fromStatResults:(id)a1;
+ (double)standardPercent:(double)a0 digitNum:(unsigned long long)a1 limit:(BOOL)a2;

- (int)getMaxBlurCntInPeriod:(double)a0;
- (double)getBlurPersistTimePercentInPeriod:(double)a0;
- (double)getMaxBlurAreaPercentInPeriod:(double)a0;
- (int)getMaxUIAnimationCntInPeriod:(double)a0;
- (double)getUIAnimationPersistTimePercentInPeriod:(double)a0;
- (double)getMaxUIAnimationAreaPercentInPeriod:(double)a0;
- (double)getMaxUIAnimationFrameRateInPeriod:(double)a0;
- (double)getMaxUIAnimationAverFrameRateInPeriod:(double)a0;
- (double)getAverUIAnimationFrameRateInPeriod:(double)a0;
- (int)getMaxPAGAnimationCntInPeriod:(double)a0;
- (double)getPAGAnimationPersistTimePercentInPeriod:(double)a0;
- (double)getMaxPAGAnimationAreaPercentInPeriod:(double)a0;
- (double)getMaxPAGAnimationFrameRateInPeriod:(double)a0;
- (double)getMaxPAGAnimationAverFrameRateInPeriod:(double)a0;
- (double)getAverPAGAnimationFrameRateInPeriod:(double)a0;
- (void).cxx_destruct;

@end
