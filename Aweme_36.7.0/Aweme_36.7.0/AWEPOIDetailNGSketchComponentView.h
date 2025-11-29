@class MASConstraint, UIImageView, AWEPOIDetailNGPageContext, UILabel, UIView, UIButton;

@interface AWEPOIDetailNGSketchComponentView : DitoComponentView

@property (retain, nonatomic) UIImageView *sketchView;
@property (retain, nonatomic) UIView *errorContainerView;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorDescriptionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (readonly, nonatomic) AWEPOIDetailNGPageContext *ngPageContext;
@property (nonatomic) BOOL hasTrackedErrorShow;

- (void)retry:(id)a0;
- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void)toggleLoading:(BOOL)a0;
- (void)showErrorState:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
