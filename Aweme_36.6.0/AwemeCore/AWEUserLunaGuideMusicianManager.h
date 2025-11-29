@interface AWEUserLunaGuideMusicianManager : NSObject

+ (id)p_colorWithLightColor:(id)a0 darkColor:(id)a1;
+ (id)p_imageWithLightImage:(id)a0 darkImage:(id)a1;
+ (BOOL)shouldShowGuideLunaMusicianBtnWithContext:(id)a0;
+ (void)didTapGuideLunaMusicianEntryWithContext:(id)a0 sceneType:(unsigned long long)a1;
+ (id)createGuideLunaButtonWithContext:(id)a0;
+ (void)trackGuideLunaEntryShowWithContext:(id)a0 scene:(unsigned long long)a1;
+ (void)trackGuideLunaEntryShowFailIfNeedWithContext:(id)a0 scene:(unsigned long long)a1;
+ (void)checkAndRequestGuideLunaMusicianInfo:(id)a0;
+ (id)p_btnInfo:(id)a0;
+ (unsigned long long)p_guideLunaButtonStyle;
+ (id)p_createGuideLunaWhiteButtonWithTitle:(id)a0;
+ (id)p_createGuideLunaBlackButtonWithTitle:(id)a0;
+ (id)p_createGuideLunaMiniButton;
+ (double)p_buttonFontSize;
+ (void)p_trackClickGuideLunaEntryWithContext:(id)a0 sceneType:(unsigned long long)a1;
+ (void)p_trackPopViewDataErrorIfNeedWith:(id)a0 sceneType:(unsigned long long)a1;

@end
