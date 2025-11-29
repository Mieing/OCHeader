@class UIColor, UIFont, NSAttributedString;

@interface WeChat.WCSearchTextField : MMTagTextField {
    void /* unknown type, empty encoding */ isGradientCanShow;
    void /* unknown type, empty encoding */ onGetBackgroundColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelBackground;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightGradientView;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) void /* unknown type, empty encoding */ labelBackgroundColor;
@property (nonatomic, copy) id /* block */ onGetBackgroundColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onTextFieldChanged:(id)a0;
- (void)onTextFieldEditingDidBegin:(id)a0;
- (void)onTextFieldEditingDidEnd:(id)a0;
- (void).cxx_destruct;

@end
