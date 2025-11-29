@interface MMUICommonUtil : NSObject

+ (void)setBottomBarButtonTitleColor:(id)a0 withStyle:(unsigned long long)a1;
+ (id)getBackBarButtonWithTarget:(id)a0 action:(SEL)a1;
+ (id)getCloseBarButtonWithTarget:(id)a0 action:(SEL)a1;
+ (id)getBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3;
+ (id)getBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3 color:(id)a4;
+ (id)getBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3 maxWidth:(double)a4 color:(id)a5;
+ (id)getBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3 maxWidth:(double)a4 color:(id)a5 font:(id)a6;
+ (id)getBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3 maxWidth:(double)a4 color:(id)a5 font:(id)a6 buttonImageName:(id)a7;
+ (id)getBarButtonWithImageName:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3 accessibility:(id)a4;
+ (id)getBarButtonWithImageName:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3 accessibility:(id)a4 color:(id)a5;
+ (id)getBarButtonWithImage:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3 accessibility:(id)a4 color:(id)a5;
+ (id)getBarButtonWithImage:(id)a0 withHighlightedImage:(id)a1 withDisabledImage:(id)a2 withBackGroundImage:(id)a3 withBackGroundImageHL:(id)a4 withBackGroundImageDisable:(id)a5 target:(id)a6 action:(SEL)a7 style:(unsigned long long)a8 accessibilityStr:(id)a9;
+ (id)getStandardBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 color:(id)a3;
+ (id)getBottomBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3;
+ (id)genErrorTipsBar:(id)a0;
+ (id)getBlurEffect:(long long)a0;

@end
