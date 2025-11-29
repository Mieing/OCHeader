@class AWEVideoCoverEvaluateModel, DUXButton, UILabel, UIView, BDImageView;

@interface AWEVideoCoverEvaluateAiStatusView : UIView

@property (retain, nonatomic) UIView *statusView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *imageScaleLabel;
@property (retain, nonatomic) UILabel *evaluateStatusLabel;
@property (retain, nonatomic) UILabel *evaluateCaptionLabel;
@property (retain, nonatomic) DUXButton *evaluateButton;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;
@property (copy, nonatomic) id /* block */ evaluateBlock;

- (void)initSubViews;
- (void)configSubViews;
- (void)updateEvaluateStatus:(id)a0;
- (void)makeEvaluateViewConstraint;
- (void)setViewOngoing;
- (void)setViewFail;
- (void)setViewExcellent;
- (void)evaluateButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
