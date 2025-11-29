@class NSString, UILabel, UIView, UIButton;
@protocol BDPPrivacyRegulationAlertViewDelegate;

@interface BDPPrivacyRegulationAlertView : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *backIcon;
@property (copy, nonatomic) NSString *closeIcon;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<BDPPrivacyRegulationAlertViewDelegate> delegate;

- (void)p_setupContentView;
- (void)p_setupBackBtn;
- (void)p_setupContainer;
- (void)onClickClose:(id)a0;
- (id)initWithTitle:(id)a0 contentView:(id)a1 backIcon:(id)a2 closeIcon:(id)a3;
- (void)p_setupTitle;
- (void)p_setupCloseBtn;
- (void).cxx_destruct;
- (void)setupUI;

@end
