@interface FlowUIKit.ButtonView : UIButton {
    void /* unknown type, empty encoding */ defaultBackgroundColor;
    void /* unknown type, empty encoding */ pressedBackgroundColor;
    void /* unknown type, empty encoding */ customImageView;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ customImage;
    void /* unknown type, empty encoding */ showIconShadow;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic) BOOL enabled;

- (void)touchUpInside;
- (void)touchUpOutside;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (void)layoutSubviews;
- (void)touchDown;

@end
