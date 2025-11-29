@interface IESMMSpinSpeedUtils : NSObject

@property (nonatomic) double x1;
@property (nonatomic) double x2;
@property (nonatomic) double y1;
@property (nonatomic) double y2;
@property (nonatomic) long long srcDuration;
@property (nonatomic) long long dstDuration;
@property (nonatomic) long long cycleSrcTimeUs;
@property (nonatomic) long long cycleDstTimeUs;
@property (readonly, nonatomic) double avgSpeedRatio;

- (id)initWithPoints:(id)a0 yPoints:(id)a1 srcDuration:(long long)a2 config:(id)a3;
- (long long)transVideoTimeToPlayTime:(long long)a0;
- (long long)transPlayTimeToVideoTime:(long long)a0;

@end
