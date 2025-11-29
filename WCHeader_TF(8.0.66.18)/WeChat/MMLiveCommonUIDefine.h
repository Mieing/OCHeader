@interface MMLiveCommonUIDefine : NSObject

+ (id)commentNickNameColor;
+ (double)bottomControlWidgetBottomMargin:(id)a0;
+ (double)topControlWidgetTopMargin;
+ (double)controlWidgetLeftMargin;
+ (double)controlWidgetRightMargin;
+ (double)connectMicButtonContainerHeight;
+ (double)bottomControlWidgetLeftMargin;
+ (double)bottomControlWidgetRightMargin;
+ (double)pubbleInputViewLeftMargin:(id)a0;
+ (double)expressionButtonRightMargin:(id)a0;
+ (double)circleButtonSize;
+ (double)topActionButtonDistance;
+ (double)bottomActionButtonDistance;
+ (double)commentButtonWidth;
+ (double)commentButtonWidthLandscape;
+ (double)commentButtonWidthPortrait;
+ (double)commentButtonMinWidthPortrait;
+ (double)commentButtonMinWidthLandscape;
+ (BOOL)isLargeScreen;
+ (double)finderCommentButtonWidthForAssistant:(BOOL)a0;
+ (double)finderCommentButtonWidthForAnchor:(BOOL)a0;
+ (void)updateCurrentLiveBusinessType:(unsigned long long)a0;
+ (unsigned long long)currentLiveBusinessType;
+ (id)getAccessibilityLabelForWidget:(id)a0;
+ (id)getHandledAccessibilityStr:(id)a0;
+ (id)imageFromColorA:(id)a0 atNormalizedPointA:(struct CGPoint { double x0; double x1; })a1 colorB:(id)a2 atNormalizedPointB:(struct CGPoint { double x0; double x1; })a3;
+ (void)configLiveHalfscreenCloseButtonImage:(id)a0;
+ (void)configLiveHalfscreenCloseButtonImage:(id)a0 onlyDark:(BOOL)a1;
+ (void)configLiveHalfscreenCloseButtonImage:(id)a0 onlyDark:(BOOL)a1 iconAngle:(double)a2 specifiedColor:(id)a3;
+ (id)getLiveHalfscreenCloseButtonImage:(BOOL)a0;
+ (id)getLiveHalfscreenCloseButtonImage:(BOOL)a0 angle:(double)a1 specifiedColor:(id)a2;
+ (id)getLiveMultiAngleHalfscreenCloseButtonImage;
+ (void)configLiveMultiAngleHalfscreenCloseButtonImage:(id)a0;
+ (void)configLivePanelDefaultArrBtn:(id)a0;
+ (void)configArrBtn:(id)a0 iconColor:(id)a1 bgColor:(id)a2 imgSize:(struct CGSize { double x0; double x1; })a3 btnSize:(struct CGSize { double x0; double x1; })a4;
+ (void)configArrBtn:(id)a0 iconColor:(id)a1 bgColor:(id)a2 rotate:(double)a3 imgSize:(struct CGSize { double x0; double x1; })a4 btnSize:(struct CGSize { double x0; double x1; })a5;
+ (void)addCommonBouncePopupAnimationFor:(id)a0;
+ (double)connectMicVideoUserHeadImageSideLengthWithUiType:(unsigned long long)a0 andIsGlobalSmallMode:(BOOL)a1;
+ (id)GetGradientColorsByBadgeType:(unsigned int)a0;

@end
