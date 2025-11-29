@class UIView, NSString, NSArray, AWEIMMixPhotoAIStateInfoView, AWEIMMixPhotoAIModelInfoView, UIImageView, UIButton, UICollectionView, UIVisualEffectView, UILabel, AWEIMMixDetailModel;
@protocol IESIMLoadingViewProtocol, IESIMCustomModalTransitionContext, IESIMGradientViewProtocol;

@interface AWEIMMixDetailViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, IESIMCustomModalTransitionVCProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMMixPhotoAIModelInfoView *aiInfoView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIView *contentImageMaskView;
@property (retain, nonatomic) UILabel *styleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIVisualEffectView *countLabelBackgroundView;
@property (retain, nonatomic) AWEIMMixPhotoAIStateInfoView *taskStateInfoView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIButton *leftTopButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) AWEIMMixDetailModel *model;
@property (copy, nonatomic) NSArray *userInfoArray;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *gradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMCustomModalTransitionContext> transitionContext;

+ (void)presentWithViewModel:(id)a0;

- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)transitionPresentedViewFullScreenEnable;
- (BOOL)shouldBypassPresentationHook;
- (BOOL)enableCloseButtonForPresentation;
- (id)closeButtonImageForPresentation;
- (void)layoutCloseButtonForPresentation:(id)a0;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:(long long)a0;
- (void)__setupUI;
- (void)renderModel:(id)a0;
- (void)onShareButtonClick;
- (void)p_presentPageWithViewModel:(id)a0;
- (void)presentPageWithViewModel:(id)a0;
- (void)onButtonClick;
- (void)onLeftTopButtonClick;
- (void)updateFullScreenLayout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (double)customCornerRadius;

@end
