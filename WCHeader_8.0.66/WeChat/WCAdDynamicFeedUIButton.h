@class UIColor, WCAdDynamicFeedElementInfo;

@interface WCAdDynamicFeedUIButton : MMUIButton

@property (retain, nonatomic) UIColor *titleColorNormal;
@property (retain, nonatomic) UIColor *bgColorNormal;
@property (retain, nonatomic) UIColor *titleColorHighlighted;
@property (retain, nonatomic) UIColor *bgColorHighlighted;
@property (retain, nonatomic) UIColor *titleColorDisabled;
@property (retain, nonatomic) UIColor *bgColorDisabled;
@property (nonatomic) BOOL isDisabledStyle;
@property (retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo;

- (void)updateButtonStateWithTitle:(id)a0 isEnabled:(BOOL)a1 isDisabledStyle:(BOOL)a2;
- (void)updateTitleColorNormal:(id)a0;
- (void)updateBgColorNormal:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
