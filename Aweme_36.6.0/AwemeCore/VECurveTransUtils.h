@class IESMMSpinSpeedUtils;

@interface VECurveTransUtils : NSObject {
    void *_teCurveUtils;
}

@property (nonatomic) long long srcDuration;
@property (nonatomic) long long dstDuration;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) IESMMSpinSpeedUtils *spinUtils;
@property (readonly, nonatomic) double avgSpeedRatio;

+ (id)transferVideoPointXtoPlayPointX:(id)a0 curveSpeedPointY:(id)a1;

- (id)initWithCurveSource:(id)a0;
- (id)initWithPoints:(id)a0 yPoints:(id)a1 srcDuration:(long long)a2 config:(id)a3;
- (long long)transVideoTimeToPlayTime:(long long)a0;
- (long long)transPlayTimeToVideoTime:(long long)a0;
- (id)initWithPoints:(id)a0 yPoints:(id)a1 srcDuration:(long long)a2;
- (double)getCurveSpeedRatioWithPlayTime:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
