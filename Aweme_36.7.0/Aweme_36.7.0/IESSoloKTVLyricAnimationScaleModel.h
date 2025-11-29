@interface IESSoloKTVLyricAnimationScaleModel : IESSoloKTVLyricAnimationModel

@property (nonatomic) BOOL scaleEnable;
@property (nonatomic) double startScale;
@property (nonatomic) double endScale;
@property (nonatomic) double scaleStep;

- (id)init;

@end
