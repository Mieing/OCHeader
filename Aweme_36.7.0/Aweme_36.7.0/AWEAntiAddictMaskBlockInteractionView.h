@class UIButton, AWEAntiAddictMaskContext, NSString, UIView, AWEGradientView, UILabel;

@interface AWEAntiAddictMaskBlockInteractionView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEAntiAddictMaskContext *context;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *blockAfterLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *blockAfterTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGestureRecognizer;
- (void)didClickFeedbackButton;
- (void)catchGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)showWithCompletion:(id /* block */)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setup;

@end
