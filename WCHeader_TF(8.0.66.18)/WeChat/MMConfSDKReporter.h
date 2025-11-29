@interface MMConfSDKReporter : NSObject

+ (void)setVideoDeviceErrCode:(int)a0;
+ (void)setAudioEndStatusWithRecordReadNum:(int)a0 playVolume:(int)a1;
+ (void)setAudioEndStatusWithPlayCallNum:(int)a0;
+ (void)setAudioPlayInitStatus:(int)a0 recorderErrCode:(int)a1 playerErrCode:(int)a2;
+ (void)setAudioMicAbnormal:(int)a0;
+ (id)generateReport;
+ (void)resetAll;
+ (void)setAudioSysinterrupTimestamp:(unsigned long long)a0 beginTs:(unsigned long long)a1 InterCnt:(unsigned int)a2;
+ (void)setTalkViewAndAudioDevieTimestamp:(unsigned long long)a0 SuccRec:(unsigned long long)a1 starRec:(unsigned long long)a2 startPlay:(unsigned long long)a3 delayStart:(BOOL)a4;
+ (void)setAudioDeviceStartCnt:(int)a0;

@end
