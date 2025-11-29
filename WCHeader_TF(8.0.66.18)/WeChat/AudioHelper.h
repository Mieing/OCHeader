@interface AudioHelper : NSObject

+ (BOOL)IsWeiXinSoundPlaying;
+ (BOOL)IsWeiXinSoundPaused;
+ (void)StopAudio;
+ (BOOL)IsMusicPlaying;
+ (BOOL)IsMusicIdle;
+ (BOOL)IsMusicWaiting;
+ (BOOL)IsMusicPaused;
+ (void)StopMusic;
+ (BOOL)PauseMusic;
+ (void)RestartMusic;
+ (BOOL)IsAudioTalkPlaying;
+ (BOOL)IsAudioTalkRecording;
+ (BOOL)PauseAudioTalk;
+ (void)RestartAudioTalk;
+ (void)PlaySystemSound:(id)a0 FileType:(id)a1 Ambient:(BOOL)a2;
+ (void)AVPlaySystemSound:(id)a0 FileType:(id)a1 Ambient:(BOOL)a2;
+ (void)playSound:(id)a0 fileType:(id)a1 volume:(float)a2 ambient:(BOOL)a3;
+ (void)playSound:(id)a0 fileType:(id)a1 volume:(float)a2 ambient:(BOOL)a3 withCompletion:(id /* block */)a4;
+ (void)playSoundAtPath:(id)a0 volume:(float)a1 ambient:(BOOL)a2;
+ (void)playSoundAtPath:(id)a0 volume:(float)a1 ambient:(BOOL)a2 withCompletion:(id /* block */)a3;
+ (void)playVibration;
+ (BOOL)playNewMsgNotify;
+ (BOOL)playNewMsgNotifyInMessageContent;
+ (void)playSendMsgNotify;
+ (void)showRecordDenied;
+ (BOOL)isSilkFile:(id)a0;
+ (id)GetQVIVoiceAnalysis;

@end
