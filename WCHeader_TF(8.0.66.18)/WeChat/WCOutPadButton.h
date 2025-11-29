@class UIView;

@interface WCOutPadButton : MMUIButton {
    UIView *m_iconView;
    UIView *m_coverView;
}

- (id)initWithMainLabel:(id)a0 subLabel:(id)a1 colorMode:(unsigned long long)a2;
- (id)initWithIconImage:(id)a0 coverImage:(id)a1 selectedBackgroundColor:(id)a2;
- (void)InternalInitWithIconView:(id)a0 coverView:(id)a1;
- (void)InternalInitWithIconImage:(id)a0 coverImage:(id)a1 selectedBackgroundColor:(id)a2;
- (void)layoutSubviews;
- (void)performLayout;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
