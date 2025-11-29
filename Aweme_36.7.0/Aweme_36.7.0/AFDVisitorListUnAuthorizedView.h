@class UIStackView, AFDVisitorListUnAuthorizedViewConfigModel, AWEButton, AFDVisitorListUnAuthorizedHintView, UIView, UILabel, UIViewController;
@protocol AFDVisitorListUnAuthorizedViewDelegate;

@interface AFDVisitorListUnAuthorizedView : UIView

@property (retain, nonatomic) AFDVisitorListUnAuthorizedViewConfigModel *configModel;
@property (weak, nonatomic) UIViewController<AFDVisitorListUnAuthorizedViewDelegate> *delegate;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEButton *openAuthButton;
@property (retain, nonatomic) AWEButton *closeAuthButton;
@property (retain, nonatomic) AFDVisitorListUnAuthorizedHintView *hintView;
@property (retain, nonatomic) UIStackView *actionButtonStackView;

- (void)p_configUI;
- (id)initWithConfigModel:(id)a0 delegate:(id)a1;
- (double)titleLabelTopMargin;
- (void)clickOpenAuthButton:(id)a0;
- (void)clickCloseAuthButton:(id)a0;
- (id)addOutsideBorderFor:(id)a0 withBorderWidth:(double)a1;
- (id)getUnAutorizedPageIconView;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
