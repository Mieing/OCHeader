@class RTVEffectGameModel, RTVEffectGameListHintView, UICollectionView, RxDeferred, NSString;
@protocol RTVEffectGameListDataSource, RTVEffectGameListViewControllerDelegate, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector;

@interface RTVEffectGameListViewController : UIViewController <RTVEffectGameListViewController, UICollectionViewDelegate, RTVPageSheetViewControllerProtocol, RTVEffectGameListCellDelegate, RTVEffectGameListHintViewDelegate, RTVXRControllerInterface, RTVEffectGameSessionObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) RTVEffectGameListHintView *hintView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) id<RTVEffectGameListDataSource> dataSource;
@property (readonly, nonatomic) RxDeferred *showDefer;
@property (retain, nonatomic) RTVEffectGameModel *gameModel;
@property (weak, nonatomic) id<RTVEffectGameListViewControllerDelegate> delegate;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePreferredContentSizeBelongToAutoLayout;
- (id)transitionViewBackgroundColor;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)__createCollectionView;
- (BOOL)disableDismissTapGestureForPageSheetPresentation;
- (BOOL)enablePullDismissGestureForPageSheetPresentation;
- (void)showEmptyView:(BOOL)a0;
- (void)showRetryView:(BOOL)a0;
- (id)__onCallParticipators:(id)a0;
- (void)effectGameSession:(id)a0 changeGame:(id)a1;
- (void)effectGameListCell:(id)a0 didSelectGameModel:(id)a1;
- (void)__createDataSource;
- (void)effectGameHintViewDidTapRetry:(id)a0;
- (void)__createHintView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })__collectionViewFlowLayoutSectionInset;
- (id)__collectionViewBackgroundColor;
- (double)__collectionViewTopOffset;
- (id)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)showOnViewController:(id)a0;

@end
