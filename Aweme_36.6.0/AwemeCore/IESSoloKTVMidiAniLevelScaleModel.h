@interface IESSoloKTVMidiAniLevelScaleModel : IESSoloKTVMidiAnimationModel

@property (nonatomic) BOOL levelScaleEnable;
@property (nonatomic) double levelScaleStart;
@property (nonatomic) double levelScaleEnd;
@property (nonatomic) double levelScaleStep;

- (id)init;

@end
