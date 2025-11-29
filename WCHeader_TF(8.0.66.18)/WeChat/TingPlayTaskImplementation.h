@class TingPlayerAudioModuleHelper;

@interface TingPlayTaskImplementation : TingPlayTaskCpp

@property (retain, nonatomic) TingPlayerAudioModuleHelper *audioModuleHelper;

- (void)configurateAudioModuleHelper:(id)a0;
- (BOOL)checkAndActiveAudioModule;
- (void)play:(int)a0;
- (void)stop;
- (void)resume;
- (void)pause;
- (void).cxx_destruct;

@end
