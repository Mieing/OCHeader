@class UIStackView, UIView, NSString, AWEIMMixPhotoAIModelInfoView, AWEIMMixPhotoInitiatePageSheetViewModel, AWEIMMixPhotoInitiatePageSheetActionView, AWEIMMixPhotoInitiatePageSheetCollectionView, UILabel;
@protocol IESIMLoadingViewProtocol, IESIMCustomModalTransitionContext;

@interface AWEIMMixPhotoInitiatePageSheetViewController : UIViewController <AWEIMInAppPushProtocol, IESIMCustomModalTransitionVCProtocol, AWEIMMixPhotoInitiatePageSheetActionViewDelegate, AWEIMMixPhotoInitiatePageSheetCollectionViewDelegate>

@property (retain, nonatomic) AWEIMMixPhotoInitiatePageSheetViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMMixPhotoInitiatePageSheetActionView *actionView;
@property (retain, nonatomic) AWEIMMixPhotoInitiatePageSheetCollectionView *collectionView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWEIMMixPhotoAIModelInfoView *aiModelInfoView;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL didTrackClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMCustomModalTransitionContext> transitionContext;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)canShowInnerPush;
- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)transitionPresentedViewFullScreenEnable;
- (BOOL)shouldBypassPresentationHook;
- (BOOL)enableCloseButtonForPresentation;
- (id)closeButtonImageForPresentation;
- (void)layoutCloseButtonForPresentation:(id)a0;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:(long long)a0;
- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)p_log:(id)a0;
- (void)p_configComponents;
- (void)clickNegativeWithActionView:(id)a0;
- (void)clickPositiveWithActionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForMixPhotoInitiatePageSheetCollectionView:(id)a0;
- (void)p_trackCloseWithExitMethod:(id)a0;
- (void)p_trackPageEventWithActionType:(id)a0 clickType:(id)a1 forceAddSelectedInfo:(BOOL)a2;
- (double)p_safeAreaInsetsBottom;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (double)customCornerRadius;

@end
