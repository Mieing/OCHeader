@class NSString, IESLiveGiftPanelDataSharing, IESLiveGiftDynamicPanelOperationViewModel, UIView;
@protocol IESLiveNewGiftPanelItemProtocol, IESLiveSubscription;

@interface IESLiveGiftDynamicPanelOperationVisibilityRPCItem : NSObject <IESLiveRefactGiftPanelEventAction, IESLiveDynamicGiftPanelOperationVisibilityService, IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) id<IESLiveNewGiftPanelItemProtocol> current;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL isInInteract;
@property (retain, nonatomic) IESLiveGiftDynamicPanelOperationViewModel *viewModel;
@property (retain, nonatomic) UIView *panelView;
@property (weak, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) id<IESLiveSubscription> currentPageTypeSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> selectedCollectionViewModelSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> currentSelectedGiftItemSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> groupModeSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> onGiftExtraInfoFetchedSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> currentTopModeSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> currentTopModeReadySubscription;
@property (retain, nonatomic) id<IESLiveSubscription> onSearchSubscription;
@property (nonatomic) BOOL isOperationShouldExpand;
@property (nonatomic) BOOL isOperationRealExpand;
@property (nonatomic) BOOL enableGiftPanelReborn;
@property (nonatomic) BOOL fixGroupSendShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_giftListCollectionViewWillDisplay;
- (void)gpe_giftListScrollViewDidScroll:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewDidEndDecelerating:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)gpe_giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)giftViewWillShow;
- (id)lynxData;
- (void)bindViewModel;
- (void)updatePanelDataSharing:(id)a0;
- (id)currentGiftListCollectionView;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (id)panelDI;
- (BOOL)currentOperationExpand;
- (void)disposeSubscription;
- (void)disposeGroupSubscription;
- (void)bindViewModelWithRenderOpt;
- (void)updateOperationSectionIfNeededWithSource:(unsigned long long)a0;
- (void)doExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (void)searchModeRefreshAnimation;
- (void)refreshAnimationWithContentOffset:(long long)a0 isFromExtraRefresh:(BOOL)a1;
- (BOOL)shouldOperationForceEmptyWithDataSharing:(id)a0;
- (BOOL)isShowTabOperation;
- (void)doAnimationToExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;

@end
