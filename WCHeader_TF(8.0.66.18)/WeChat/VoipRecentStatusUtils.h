@interface VoipRecentStatusUtils : NSObject

+ (BOOL)isEnable;
+ (BOOL)isVoipAudioCallingUnFolded;
+ (BOOL)isVoipVideoCallingUnFolded;
+ (BOOL)isVoipVideoTalkingEnable;
+ (BOOL)isLegalWithModel:(id)a0;
+ (id)recentStatusCardViewWithUserName:(id)a0 model:(id)a1 didOpenPageButtonCallback:(id /* block */)a2 isCloseButtonHidden:(BOOL)a3 didClickCloseButtonCallback:(id /* block */)a4 isSoundButtonHidden:(BOOL)a5 didClickSoundButtonCallback:(id /* block */)a6;
+ (void)log24183WithModel:(id)a0 actionType:(unsigned long long)a1;

@end
