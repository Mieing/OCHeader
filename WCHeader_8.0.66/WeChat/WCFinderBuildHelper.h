@interface WCFinderBuildHelper : NSObject

+ (id)buildLabelWithFont:(id)a0 textColor:(id)a1 textAlignment:(long long)a2;
+ (id)buildLabelWithFont:(id)a0 textColor:(id)a1 textHeight:(double)a2 defaultText:(id)a3 maxWidth:(double)a4 textAlignment:(long long)a5;
+ (id)truncateString:(id)a0 withFont:(id)a1 maxWidth:(double)a2 maxHeight:(double)a3;
+ (id)detectWechatEmotionRanges:(id)a0;
+ (id)buildImageButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 normalImage:(id)a1 selectImage:(id)a2 expandHitHeight:(double)a3 expandHitWidth:(double)a4 cornerRadius:(double)a5 target:(id)a6 action:(SEL)a7 voiceOverTips:(id)a8;
+ (id)buildRichTextViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fWidth:(double)a1 parserType:(unsigned long long)a2 lineNumber:(long long)a3 font:(id)a4 textColor:(id)a5 textAlignment:(long long)a6 inlineVerticalAlign:(long long)a7 defaultText:(id)a8;
+ (id)buildFinderCustomImgRichTextViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fWidth:(double)a1 parserType:(unsigned long long)a2 lineNumber:(long long)a3 font:(id)a4 textColor:(id)a5 textAlignment:(long long)a6 inlineVerticalAlign:(long long)a7 defaultText:(id)a8;
+ (id)createSwitchCellWithTitle:(id)a0 recommendTips:(id)a1 recommendTag:(long long)a2 subTitle:(id)a3 rightIcon:(id)a4 backgroundColor:(id)a5 width:(double)a6 themeColor:(id)a7 target:(id)a8 switchOn:(BOOL)a9 switchTag:(long long)a10 tipsClickAction:(SEL)a11 switchChangeAction:(SEL)a12;
+ (id)createCellWithImage:(id)a0 iconUrl:(id)a1 title:(id)a2 subTitle:(id)a3 themeColor:(id)a4 showRightArrow:(BOOL)a5 backgroundColor:(id)a6 width:(double)a7;
+ (id)createCellWithImage:(id)a0 iconUrl:(id)a1 title:(id)a2 subTitle:(id)a3 themeColor:(id)a4 showRightArrow:(BOOL)a5 backgroundColor:(id)a6 width:(double)a7 rightTips:(id)a8 rightShowRedDot:(BOOL)a9 leftPadding:(double)a10 rightPadding:(double)a11;
+ (id)buildFinderAvatorRedDotSize:(struct CGSize { double x0; double x1; })a0 imageUrl:(id)a1;
+ (id)buildFinderAvatorRedDotSize:(struct CGSize { double x0; double x1; })a0 imageUrl:(id)a1 isSquare:(BOOL)a2;
+ (id)buildFinderIconRedDotSize:(struct CGSize { double x0; double x1; })a0 lightUrl:(id)a1 darkUrl:(id)a2 tintColor:(id)a3;
+ (double)getRichTextViewWidthByFont:(id)a0 lineNumber:(long long)a1 content:(id)a2;
+ (double)getTargetTextRichTextViewWidthByContent:(id)a0;
+ (id)splitWXEmotionFromContent:(id)a0;
+ (void)shakeAnimationForView:(id)a0;
+ (id)calculateSubStringCount:(id)a0 str:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtractRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)createGradientMaskViewRenderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blankArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetView:(id)a2;
+ (id)buildLongVideoCardSeeLaterButtonWithTarget:(id)a0 action:(SEL)a1;
+ (id)buildWxAvatarImageViewSize:(struct CGSize { double x0; double x1; })a0 wxUsername:(id)a1 iconUrl:(id)a2;
+ (BOOL)targetViewIsShowing:(id)a0;
+ (void)makeHalfCorner:(id)a0;
+ (void)addEdgeMaskToView:(id)a0 maskWidth:(double)a1 leftMask:(BOOL)a2 rightMask:(BOOL)a3;
+ (void)removeEdgeMaskToView:(id)a0;

@end
