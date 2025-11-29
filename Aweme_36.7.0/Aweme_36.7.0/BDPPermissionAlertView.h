@class UIView, NSString, BDPPermissionAlertBaseButtonView, BDPPrivacyRegulationView, UIImageView, NSLayoutConstraint, BDPShortTermSubscribeFooterView, UILabel;
@protocol BDPPermissionViewDelegate;

@interface BDPPermissionAlertView : UIView <BDPPermissionBaseButtonViewDelegate, BDPPermissionPrivacyProtectButtonViewDelegate>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *applyStr;
@property (weak, nonatomic) UIView *logoContainer;
@property (weak, nonatomic) UIView *mainContainer;
@property (weak, nonatomic) UIView *contentContainerView;
@property (weak, nonatomic) UIView *privacyContainerView;
@property (weak, nonatomic) UIView *footerView;
@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) BDPPermissionAlertBaseButtonView *buttonView;
@property (weak, nonatomic) BDPPrivacyRegulationView *privacyView;
@property (weak, nonatomic) BDPShortTermSubscribeFooterView *feedCardView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL isLongTermFooter;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeftNotIconConstraint;
@property (readonly, weak, nonatomic) UIView *bottomView;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewLeftConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewRightConstraint;
@property (weak, nonatomic) id<BDPPermissionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmButtonDidClicked;
- (void)cancelButtonDidClicked;
- (id)initWithTitle:(id)a0 iconURL:(id)a1 contentView:(id)a2 buttonView:(id)a3 footerView:(id)a4 feedCardView:(id)a5 privacyView:(id)a6 bottomView:(id)a7 applyStr:(id)a8;
- (void)confirmButtonDidClickedWhileNotAllowed;
- (void)setupfeedCardView;
- (id)initWithTitle:(id)a0 iconURL:(id)a1 contentView:(id)a2 buttonView:(id)a3 footerView:(id)a4 feedCardView:(id)a5 privacyView:(id)a6;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
