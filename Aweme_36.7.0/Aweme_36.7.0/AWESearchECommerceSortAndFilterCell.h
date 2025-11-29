@class AWESearchLayoutDelegateContainerView, AWEMerchandiseComponentCell, CAShapeLayer, AWEDoubleColumnSearchMerchandiseFilterManager, NSString, NSDictionary;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchECommerceSortAndFilterCell : UICollectionViewCell <AWESearchCachalotControllerBizDelegate, CachalotMessageHandler, AWEMerchandiseComponentCellDelegate, AWEDoubleColumnSearchMerchandiseFilterManagerDelegate, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) double lastScrollEndOffsetY;
@property (nonatomic) double lastInCellOffsetY;
@property (nonatomic) double nowInCellOffsetY;
@property (nonatomic) double currentOffsetY;
@property (retain, nonatomic) AWESearchLayoutDelegateContainerView *p_container;
@property (retain, nonatomic) CAShapeLayer *sortFilterMaskLayer;
@property (weak, nonatomic) id bizDelegate;
@property (retain, nonatomic) AWEMerchandiseComponentCell *componentCell;
@property (copy, nonatomic) NSString *enterFromSource;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (BOOL)shouldRespondToHit:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)handleMessage:(id)a0 callback:(id /* block */)a1;
- (void)filterSelectStatusDidChangedWithManager:(id)a0;
- (void)refreshWithFilterManager:(id)a0 isFromSelectBoard:(BOOL)a1 trackParams:(id)a2;
- (void)hideSelectBoard:(id)a0;
- (void)componentCell:(id)a0 itemView:(id)a1 didSelectItemWithFilterComponentModel:(id)a2;
- (BOOL)componentCell:(id)a0 isSelectingWithItemModel:(id)a1;
- (void)componentCell:(id)a0 componentItemView:(id)a1 didSelectTabWithTabType:(id)a2;
- (id)preprocessSortFilterModel:(id)a0;
- (void)p_scrollChildToFullCardState;
- (void)p_setupCellCorner:(unsigned long long)a0;
- (id)resultSourceForModel:(id)a0;
- (void)p_handleAdjustInCardFrameWithScrollView:(id)a0;
- (void)p_updateSubCellsInitFrame:(double)a0;
- (void)p_scrollSelfToFullCardState;
- (void)p_scrollSelfToPositionCardState;
- (void)p_scrollChildToPositionCardState;
- (void)p_scrollSelfToHalfCardState;
- (void)p_scrollSelfAutoCardState;
- (void)p_scrollChildToHalfCardState;
- (void)forceUpdateComponentCell;
- (void)cachalotFeedDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)context;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
