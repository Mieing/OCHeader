@class UIView, IESLiveAudienceAdminPrompInputView, IESLiveAudienceAdminPrompListContainerView, UIButton, CAGradientLayer, UIViewController, UILabel, UIScrollView;

@interface IESLiveAudienceAdminPrompVcViewHandler : NSObject

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *keyboardContaier;
@property (weak, nonatomic) UIViewController *viewCotroller;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIButton *topBackView;
@property (retain, nonatomic) UIButton *keyboardMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *fakeNavigatorView;
@property (retain, nonatomic) UIView *seperator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *landBaseView;
@property (retain, nonatomic) UIButton *inputButton;
@property (retain, nonatomic) IESLiveAudienceAdminPrompInputView *inputView;
@property (retain, nonatomic) UIButton *explainButton;
@property (retain, nonatomic) IESLiveAudienceAdminPrompListContainerView *tableView;
@property (retain, nonatomic) UILabel *emptyView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;

- (double)safeBottom;
- (void)setupInputViewOriginPosition;
- (void)setupInputViewPositionForKeyboardShow:(id)a0;
- (void)setupInputViewPositionForKeyboardHide:(id)a0;
- (void)showPromptSheetInView:(id)a0;
- (void)scrollTableViewToBottomIfNeeded;
- (void).cxx_destruct;
- (void)setupViews;

@end
