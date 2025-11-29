@interface MJVolumeAnalysisResult : NSObject

@property (readonly, nonatomic) BOOL isLowLoudness;
@property (readonly, nonatomic) double loudnessDecibel;

- (id)initWithIsLowLoudness:(BOOL)a0 loudnessDecibel:(double)a1;
- (id)description;

@end
