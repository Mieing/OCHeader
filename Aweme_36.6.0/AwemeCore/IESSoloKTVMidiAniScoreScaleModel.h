@interface IESSoloKTVMidiAniScoreScaleModel : IESSoloKTVMidiAnimationModel

@property (nonatomic) BOOL scoreScaleEnable;
@property (nonatomic) double scoreScaleStart;
@property (nonatomic) double scoreScaleEnd;
@property (nonatomic) double scoreScaleStep;

- (id)init;

@end
