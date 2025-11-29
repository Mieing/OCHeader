@interface IESSoloKTVMidiAniLevelAlphaModel : IESSoloKTVMidiAnimationModel

@property (nonatomic) BOOL levelAlphaEnable;
@property (nonatomic) double levelAlphaStart;
@property (nonatomic) double levelAlphaEnd;
@property (nonatomic) double levelAlphaStep;

- (id)init;

@end
