@interface AWEIMBigFontStyleManager : NSObject

+ (void)im_scaleControllerViewWithView:(id)a0 wrappedInContainerVC:(BOOL)a1;
+ (void)im_transformScaleView:(id)a0 withScale:(double)a1 shouldResetFrame:(BOOL)a2;
+ (double)im_scaleFactorOfChatVC;
+ (double)im_screenWidthOfChatVC;
+ (double)im_screenHeightOfChatVC;
+ (struct CGSize { double x0; double x1; })im_screenSizeOfChatVC;
+ (double)im_scaleFactorofMessageTab;
+ (double)im_scaleFactorOfMessageTabNaviBar;
+ (double)im_viewOptScaleFactorOfMessageTab;
+ (double)im_screenWidthOfMessageTab;
+ (double)im_screenHeightMessageTab;
+ (struct CGSize { double x0; double x1; })im_screenSizeOfMessageTab;
+ (struct CGSize { double x0; double x1; })screenSizeWithTargetView:(id)a0;
+ (double)im_fontScaleFactorWithScene:(unsigned long long)a0;
+ (BOOL)im_enableBigFontStyle;
+ (BOOL)im_enableBigFontStyleOfChatVC;
+ (BOOL)im_enableBigFontStyleOfMessageTab;
+ (BOOL)im_enableMessageTabBigfontOpt;
+ (BOOL)enableZoomViewModeWithScene:(unsigned long long)a0;
+ (double)keepFloatValue:(double)a0;
+ (double)scaleFloatValue:(double)a0;
+ (unsigned long long)currentFontMode;
+ (double)messageTabOptScaleFloatValue:(double)a0;
+ (double)naviBarBigFontIconWidthFor32Icon;
+ (double)naviBarBigFontIconWidthFor24Icon;
+ (double)naviBarBigFontTitleFontSize;
+ (double)naviBarButtonHitTestWidth;
+ (double)messageTabPlusButtonListCellHeight;
+ (double)messageTabPlusButtonListImageWidth;
+ (double)messageTabPlusButtonListImageLeftOffset;
+ (double)messageTabPlusButtonListLabelFontSize;
+ (BOOL)im_enableBigFontStyleCoreOpt;
+ (BOOL)im_enableBigFontStyleCore;
+ (double)im_scaleFactor;
+ (struct CGSize { double x0; double x1; })im_screenSizeWithScene:(unsigned long long)a0;
+ (double)im_viewScaleFactorOfMessageTab;
+ (BOOL)isNaviBarBigFontExpEnable;
+ (BOOL)im_enableBigFontStyleOfEmojiPanel;
+ (unsigned long long)duxComponentEnlargeTypeWithIESIMType:(unsigned long long)a0;
+ (double)messageTabEnterpriseTitleSwithcIconSize;
+ (double)naviBarNoticeUnreadNumberSize;
+ (double)naviBarNoticeUnreadBudgeSize;
+ (double)naviBarNoticeUnreadBudgeOffset;
+ (void)initialize;

@end
