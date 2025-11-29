@class UIView, AWEGeneralPopupModel, NSArray, NSString, UIImageView, UIButton, TTTAttributedLabel, AWEUIButton, AWEUILoadingView, UILabel;

@interface AWEGDPRPromotionAgreementPopupView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) TTTAttributedLabel *descriptionLabel;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) AWEGeneralPopupModel *popupModel;
@property (retain, nonatomic) TTTAttributedLabel *hintPrefixLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEUIButton *confirmButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) id /* block */ linkDidClickBlock;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentAlertViewWithImageURL:(id)a0 placeholderImage:(id)a1 title:(id)a2 description:(id)a3 actions:(id)a4 model:(id)a5;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)endLoading;
- (void)dismissPopupView;
- (void)setupSubviewsUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)closeButtonTapped;
- (void)setupButtons;
- (void)showLoading;

@end
