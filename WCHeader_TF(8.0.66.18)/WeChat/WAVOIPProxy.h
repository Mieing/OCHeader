@class NSString;

@interface WAVOIPProxy : NSObject <IWAVOIPService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isVoipWorking;
+ (BOOL)isVoipChattingForAppid:(id)a0;
+ (BOOL)isVoipChattingMicroPhoneMuteForAppid:(id)a0;
+ (void)exitVoipChatting;
+ (void)exitVoipChattingByCloseMinimizationWindow;
+ (void)pauseVoipChattingCamera;
+ (void)resumeVoipChattingCamera;


@end
