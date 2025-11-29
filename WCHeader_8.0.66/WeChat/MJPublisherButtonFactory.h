@interface MJPublisherButtonFactory : NSObject

+ (id)imageButtonWithImage:(id)a0 accessibilityLabel:(id)a1;
+ (id)imageButtonWithImage:(id)a0 tag:(long long)a1 accessibilityLabel:(id)a2 target:(id)a3 action:(SEL)a4;
+ (id)textButtonWithTitle:(id)a0 tag:(long long)a1 accessibilityLabel:(id)a2 target:(id)a3 action:(SEL)a4;
+ (id)textButtonWithTitle:(id)a0 font:(id)a1 tag:(long long)a2 accessibilityLabel:(id)a3 target:(id)a4 action:(SEL)a5;
+ (id)textPassthroughButtonWithTitle:(id)a0 tag:(long long)a1 accessibilityLabel:(id)a2;
+ (id)imageTextButtonWithImage:(id)a0 title:(id)a1 font:(id)a2 imageTitleStyle:(long long)a3 size:(struct CGSize { double x0; double x1; })a4 padding:(double)a5 tag:(long long)a6 accessibilityLabel:(id)a7 target:(id)a8 action:(SEL)a9;
+ (id)backToStartButtonWithTarget:(id)a0 action:(SEL)a1;

@end
