@class UIButton, UIView;

@interface AWELongPressAdAttitudeContainerCellV2V3 : AWELongPressAdAttitudeContainerCell

@property (retain, nonatomic) UIView *reasonContainerView;
@property (retain, nonatomic) UIButton *submitFeedbackButton;
@property (retain, nonatomic) UIView *bubbleView;

- (void)feedbackReasonOnClick:(id)a0;
- (void)buttonClickUIChangeHelper:(id)a0;
- (void)likeButtonOnClick:(id)a0;
- (void)notInterestionButtonOnClick:(id)a0;
- (void)layoutReasonViewAtIndex:(unsigned long long)a0;
- (void)resetReasonHelper;
- (void).cxx_destruct;
- (void)setupUI;

@end
