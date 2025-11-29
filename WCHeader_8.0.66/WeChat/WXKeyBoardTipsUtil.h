@interface WXKeyBoardTipsUtil : NSObject

+ (id)tipsItemWithScene:(unsigned int)a0;
+ (void)onDidSendVoiceTransText:(id)a0;
+ (void)tryReportKeyboardTipsMsg:(id)a0;
+ (id)getTipsWithScene:(unsigned int)a0;
+ (id)getTipsWithScene:(unsigned int)a0 forReport:(BOOL)a1;
+ (id)jumpPluginInfoWithScene:(unsigned int)a0;
+ (BOOL)canShowKeyBoardTips:(unsigned int)a0;
+ (void)onExposeKeyboardTips:(unsigned int)a0;
+ (void)onClickKeyboardTips:(unsigned int)a0;
+ (void)handleJumpPlugin:(id)a0 scene:(unsigned int)a1;

@end
