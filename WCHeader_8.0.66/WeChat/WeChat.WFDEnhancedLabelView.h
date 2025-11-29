@class UIColor, UIFont;

@interface WeChat.WFDEnhancedLabelView : UIView {
    void /* unknown type, empty encoding */ resolved;
}

@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) long long lineBreakMode;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } resolveSize;

- (id)init;
- (id)initWithView:(id)a0;
- (id)initWithResolved:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithResolved:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
