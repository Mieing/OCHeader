@class UIScrollView, CAGradientLayer;

@interface IESLiveMultiAudioKTVGuestScrollBar : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL gradientStyle;

- (id)initWithGradientStyle:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
