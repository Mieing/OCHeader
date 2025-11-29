@interface MMOpenVoiceReporter : NSObject

+ (void)setAudioEndStatusWithRecordReadNum:(int)a0 playVolume:(int)a1;
+ (void)setAudioEndStatusWithPlayCallNum:(int)a0;
+ (void)setAudioPlayInitStatus:(int)a0 recorderErrCode:(int)a1 playerErrCode:(int)a2;
+ (void)setAudioMicAbnormal:(int)a0;
+ (id)generateReport;
+ (void)resetAll;

@end
