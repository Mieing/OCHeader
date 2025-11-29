@class UILabel, AWEIMHalfScreenContainerViewController, AWEIMRecommendGroupApplyViewModel, MASConstraint, UIView, BDImageView, BFTask, NSString, IESIMButton, UIStackView, YYLabel, AWEIMRecommendGroupApplyResponseModel, AWEIMMultiAvatarView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMRecommendGroupApplyViewController : UIViewController <AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) BDImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introductionLabel;
@property (retain, nonatomic) AWEIMMultiAvatarView *friendView;
@property (retain, nonatomic) YYLabel *friendLabel;
@property (retain, nonatomic) UIStackView *friendStackView;
@property (retain, nonatomic) IESIMButton *notRecommendButton;
@property (retain, nonatomic) IESIMButton *joinButton;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (weak, nonatomic) MASConstraint *confirmTopConstraint;
@property (retain, nonatomic) AWEIMRecommendGroupApplyResponseModel *applyModel;
@property (retain, nonatomic) AWEIMRecommendGroupApplyViewModel *viewModel;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL isShowingLoadingView;
@property (retain, nonatomic) BFTask *joinTask;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)halfScreenContainerVCDidTapConatainer:(id)a0;
- (void)configData:(id)a0;
- (void)createDataSource;
- (BOOL)hasFriendList;
- (void)addKVO;
- (void)didClickNotRecommendButton;
- (void)didClickJoinButton;
- (void)dismissContainerVCWithCompletion:(id /* block */)a0;
- (id)shouldDismissContainerVCTask;
- (id)initWithApplyModel:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)setupView;
- (void)showLoadingView;
- (void)didTapCloseButton;
- (void)hideLoadingView;

@end
