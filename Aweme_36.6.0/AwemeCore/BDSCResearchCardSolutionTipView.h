@class NSString, BDSCResearchCardSolutionTip, LOTAnimationView, UILabel, CAShapeLayer, UIButton;

@interface BDSCResearchCardSolutionTipView : UIView <LOTAnimationDelegate>

@property (retain, nonatomic) BDSCResearchCardSolutionTip *tip;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) LOTAnimationView *feedbackIcon;
@property (retain, nonatomic) UILabel *feedbackSuccessLabel;
@property (retain, nonatomic) CAShapeLayer *lineLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationView:(id)a0 fetchResourceWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)didClickAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tip:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
