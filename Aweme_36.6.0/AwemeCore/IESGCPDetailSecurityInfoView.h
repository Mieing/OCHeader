@class UIButton, UIView;

@interface IESGCPDetailSecurityInfoView : IESGCPDetailBaseView

@property (retain, nonatomic) UIView *securityAreaView;
@property (retain, nonatomic) UIButton *feedbackReportingButton;

- (void)bindViewModel:(id)a0;
- (void)schemaOpenUrl:(id)a0;
- (void)openFeedbackReportingInfo;
- (void)feedbackReportingAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutView;
- (void)setupView;

@end
