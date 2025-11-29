@class RACDisposable, NSString, IESLiveNewGiftPanelContext, UIView;
@protocol IESLiveNewGiftPanelItemProtocol, IESLiveSubscription;

@interface IESLiveNewGiftPanelOperationItem : NSObject <IESLiveRefactGiftPanelEventAction, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) id<IESLiveNewGiftPanelItemProtocol> current;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) RACDisposable *groupModeDisposable;
@property (retain, nonatomic) id<IESLiveSubscription> groupModeSubscription;
@property (nonatomic) BOOL isOperationExpand;
@property (nonatomic) BOOL isInInteract;
@property (retain, nonatomic) UIView *animationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (void)gpe_giftListCollectionViewWillDisplay;
- (void)gpe_giftListScrollViewDidScroll:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewDidEndDecelerating:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)gpe_giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)giftViewWillShow;
- (void)bindViewModel;
- (id)initWithPanelContext:(id)a0;
- (id)currentGiftListCollectionView;
- (id)dynamicItemClass;
- (void)bindViewModelWithRenderOpt;
- (void)updateOperationSectionIfNeededWithSource:(unsigned long long)a0;
- (void)doExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (void)searchModeRefreshAnimation;
- (void)refreshAnimationWithContentOffset:(long long)a0 isFromExtraRefresh:(BOOL)a1;
- (BOOL)isShowTabOperation;
- (void)doAnimationToExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (void)disposeIfNeeded;
- (void)bindViewModelWithoutRenderOpt;
- (id)groupSendItemClass;
- (BOOL)isLongPressItem:(id)a0;
- (id)tabOperationItemClass;
- (Class)longPressItemClass;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (id)itemClass;

@end
