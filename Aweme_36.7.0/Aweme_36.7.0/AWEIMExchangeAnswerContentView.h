@class UITapGestureRecognizer, YYTextLayout, UIView, AWEIMRefreshImageView, YYLabel;

@interface AWEIMExchangeAnswerContentView : AWEIMGeneralCardView

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) AWEIMRefreshImageView *bubbleBGView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *exchangeLabel;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (retain, nonatomic) YYTextLayout *exchangeHintLayout;

- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
