@interface IESSoloKTVMidiAniScoreChangeModel : IESSoloKTVMidiAnimationModel

@property (nonatomic) BOOL scoreEnable;
@property (nonatomic) double scoreStart;
@property (nonatomic) double scoreEnd;
@property (nonatomic) double scoreStep;

- (id)init;

@end
