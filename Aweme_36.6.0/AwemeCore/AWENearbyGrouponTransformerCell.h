@class AWEAwemeModel, NSString, UIView, AWENearbyPageContext, NSMutableArray, UIViewController, AWESharkLynxModel, UICollectionView;
@protocol AWENearbyTransformerDelegate, AWENearbyC2ContainerFeedCellControllerProtocol, AWENearbyC2CommonLifeCycleProtocol, AWESharkLynxContainerProtocol, AWENearbyTransformerControllerProtocol, AWENearbyC2ChildTrackerProtocol, AWENearbyC2NicolEventDelegate;

@interface AWENearbyGrouponTransformerCell : UICollectionViewCell <AWESharkLynxContainerViewDelegate, AWENearbyC2ContainerFeedCellProtocol>

@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) id<AWENearbyC2NicolEventDelegate> nicolDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL reuseCell;
@property (nonatomic) BOOL reuseCard;
@property (retain, nonatomic) id<AWENearbyC2ContainerFeedCellControllerProtocol, AWENearbyC2ChildTrackerProtocol> controller;
@property (weak, nonatomic) UIViewController *parentVC;
@property (weak, nonatomic) UIViewController *feedController;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (retain, nonatomic) UIView<AWESharkLynxContainerProtocol> *lynxContainerView;
@property (retain, nonatomic) UIView *transformerLifeEntrancePageView;
@property (nonatomic) BOOL isLifeEntrancePageEnable;
@property (nonatomic) BOOL needInvalidLayout;
@property (retain, nonatomic) AWESharkLynxModel *lynxModel;
@property (weak, nonatomic) UIViewController<AWENearbyC2CommonLifeCycleProtocol, AWENearbyTransformerControllerProtocol> *transformerVC;
@property (weak, nonatomic) id<AWENearbyTransformerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UICollectionView *collectionView;

+ (struct CGSize { double x0; double x1; })calculateCellSizeWithWidth:(double)a0 model:(id)a1;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)didClick;
- (void)endDisplay;
- (void)cellDidScrollDisappearTwoThirds;
- (void)cellDidScrollAppearTwoThirds;
- (void)willLeaveWithLeaveMethod:(long long)a0;
- (void)configCellWithModel:(id)a0 withIndex:(long long)a1 cellWidth:(double)a2 pageContext:(id)a3;
- (void)onClickWithModel:(id)a0;
- (void)willDisplayWhenDidAppear;
- (void)resetChildViewController;
- (void)__handleBDXBroadcastNotification:(id)a0;
- (void)lynxContainerDidFirstScreen:(id)a0;
- (void)lynxContainer:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxContainer:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)lynxContainerDidUpdate:(id)a0;
- (id)channelNameWithUrl:(id)a0;
- (void)lynxContainerOnSetupLynxInfo:(id)a0 bulletInfo:(id)a1;
- (void)__handleUpdateHeightEventWithEventName:(id)a0 params:(id)a1;
- (void)updateLynxViewHeight:(double)a0 type:(long long)a1;
- (id)__getSharkLynxModelWithModel:(id)a0;
- (id)__getExtraParamsWithModel:(id)a0;
- (BOOL)__isLifeEntrancePageEnable;
- (id)getLoadTransformerExtraParams;
- (id)__appendQueryOntoLynxUrl:(id)a0;
- (void)__configLynxWithModel:(id)a0 cellWidth:(double)a1;
- (id)getCommonParamsForShow;
- (BOOL)isUtilCardCell;
- (void)didCardUpdateFinishWithCardType:(long long)a0;
- (void)p_didCardUpdateFinishWithCardType:(long long)a0 viewName:(id)a1;
- (id)__commonParamsWithPageType:(long long)a0;
- (id)__extraParamsOfTransformerShow;
- (id)__trackEventForSinglePage;
- (id)getLoadTransformerExtraParamsForPad;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObservers;

@end
