@class UITapGestureRecognizer, AWEIMQuoteReplyStyleContentProps, UIView, YYLabel;

@interface AWEIMQuoteReplyStyleContentView : UIView

@property (retain, nonatomic) AWEIMQuoteReplyStyleContentProps *props;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *quoteReplyLineView;
@property (retain, nonatomic) YYLabel *quoteReplyLabel;
@property (retain, nonatomic) UITapGestureRecognizer *quoteTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *bubbleTapGestureRecognizer;

+ (struct CGSize { double x0; double x1; })contentSizeWithQuoteReplyAttrString:(id)a0 displayAttrString:(id)a1;
+ (struct CGSize { double x0; double x1; })quoteReplySizeWithAttrString:(id)a0;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_updateConstraints;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraints;
- (void)p_updateTexts;
- (void)p_updateLineColor;
- (struct CGSize { double x0; double x1; })p_quoteReplySize;
- (void)p_tapQuoteReplyLabelWithGesture:(id)a0;
- (void)p_tapViewWithGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
