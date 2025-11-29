@interface FlowMarkdownX.FlowMessageCaptionLinkView : UIButton {
    void /* unknown type, empty encoding */ imageFetcher;
    void /* unknown type, empty encoding */ iconImageLoadToken;
    void /* unknown type, empty encoding */ numberLb;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ titleLb;
}

@property (nonatomic) BOOL highlighted;

- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
