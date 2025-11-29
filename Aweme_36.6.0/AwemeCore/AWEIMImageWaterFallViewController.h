@class UIView, NSString, UIImageView, AWEIMImageWaterFallBottomView, RxCollectionViewDiffableDataSource, UICollectionView, UILabel, NSIndexPath;
@protocol IESIMLoadingViewProtocol, AWEIMImageWaterFallViewControllerDelegate, IESIMCustomModalTransitionContext, AWEIMImageWaterFallProtocol;

@interface AWEIMImageWaterFallViewController : UIViewController <AWEZoomTransitionOuterContextProvider, AWEIMInAppPushProtocol, IESIMCustomModalTransitionVCProtocol, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, AWEIMMixPhotoButtonWaterFallCellDelegate, AWEIMMediaDetailTransitionOuterContextProvider>

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (readonly, nonatomic) UIImageView *mainImageView;
@property (readonly, nonatomic) UILabel *mainTitle;
@property (readonly, nonatomic) UILabel *subTitle;
@property (readonly, nonatomic) UILabel *notice;
@property (retain, nonatomic) UICollectionView *cardCollection;
@property (retain, nonatomic) AWEIMImageWaterFallBottomView *bottomActionsRegion;
@property (retain, nonatomic) id<AWEIMImageWaterFallProtocol> viewModel;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSIndexPath *currentSelectedCellIndexPath;
@property (weak, nonatomic) id<AWEIMImageWaterFallViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMCustomModalTransitionContext> transitionContext;

+ (void)presentWithViewModel:(id)a0;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)canShowInnerPush;
- (id)mediaDetailTransitionStartView;
- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)transitionPresentedViewFullScreenEnable;
- (BOOL)enableCloseButtonForPresentation;
- (id)closeButtonImageForPresentation;
- (void)layoutCloseButtonForPresentation:(id)a0;
- (BOOL)disablePullIndicatorView;
- (id)pullIndicatorViewBackgroundColor;
- (void)viewControllerDidDismissByAction:(long long)a0;
- (void)p_bindViewModel;
- (void)p_showLoadingView;
- (void)p_dismiss;
- (id)transition_zoomTransitionStartViewForOffset:(long long)a0;
- (double)transition_zoomTransitionTargetViewCornerRadius;
- (void)p_hideLoadingView;
- (void)p_setupDataSource;
- (void)p_applySnapshotWithAnimatingDifferences:(BOOL)a0;
- (void)p_layoutSubViews;
- (void)p_presentPageWithViewModel:(id)a0;
- (void)p_commitButtonClicked;
- (void)p_groupActionViewClicked;
- (id)p_createDataSourceWithCollectionView:(id)a0;
- (void)p_tryAdaptScrollIfNeeded;
- (id)p_identifierWithType:(long long)a0;
- (BOOL)p_needCloseButton;
- (id)p_closeButtonImage;
- (void)p_layoutCloseButton:(id)a0;
- (BOOL)p_transitionPresentedViewFullScreenEnable;
- (void)p_didDismissByAction:(long long)a0;
- (void)didButtonClickedWithItem:(id)a0;
- (void)p_setupUI;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)customCornerRadius;

@end
