@class UITextView, NSDictionary, UIView, BDPCheckBox, BDPGameUserScopePopupConfig;
@protocol BDPGamePermissionFooterViewDelegate;

@interface BDPGamePermissionFooterView : UIView

@property (retain, nonatomic) BDPGameUserScopePopupConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UITextView *footerTitle;
@property (copy, nonatomic) NSDictionary *rangeToProtocol;
@property (weak, nonatomic) id<BDPGamePermissionFooterViewDelegate> delegate;

- (void)updateContainerViewBottom;
- (void)onTapCheckbox:(id)a0;
- (id)buildFooterTitle;
- (void)onTapProtocol:(id)a0;
- (void)updateCheckBoxStatus:(long long)a0;
- (BOOL)shouldShowAllowToast;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
