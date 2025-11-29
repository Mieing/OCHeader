@interface StreamVoiceInputBehaviorReporter : NSObject

+ (void)reportCancel:(int)a0;
+ (void)reportSend:(int)a0;
+ (void)reportClick:(int)a0;
+ (void)reportLongClick:(int)a0;
+ (void)reportLongClickTime:(int)a0;
+ (void)reportTextClick:(int)a0;
+ (void)reportTextChangeCount:(int)a0 Time:(int)a1;
+ (void)reportTextChangeReturn:(int)a0;
+ (void)reportVoiceInputTime:(int)a0;
+ (void)reportFail:(int)a0;
+ (void)reportClear:(int)a0;
+ (void)reportSmileIconClick:(int)a0;
+ (void)reportVoiceIconClick:(int)a0;
+ (void)reportFullScreenLongClick:(int)a0;
+ (void)reportFullScreenLongClickTime:(int)a0;
+ (void)reportShowInitView;
+ (void)reportShowLanguageSwitchView;
+ (void)reportChatViewSwitchToCantonese;
+ (void)reportComeInLanguageSettingView;
+ (void)reportSettingClickCantonese;
+ (void)reportLogType:(unsigned int)a0 InputType:(unsigned int)a1 sessionID:(id)a2;

@end
