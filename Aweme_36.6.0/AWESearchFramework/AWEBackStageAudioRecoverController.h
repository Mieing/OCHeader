@interface AWEBackStageAudioRecoverController : AWEAwemeNewDetailBaseController

+ (BOOL)enableRecoverAudio;
+ (void)restoreAudioSessionStateWhenViewDidDisappear;
+ (void)restoreAudioSessionState;

- (void)viewDidDisappear:(BOOL)a0;

@end
