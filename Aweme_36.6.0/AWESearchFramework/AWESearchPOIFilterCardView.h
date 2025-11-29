@class AWESearchPOIFilterCardModel, AWESearchPOIFilterManager, UIView, AWEDoubleColumnSearchMerchandiseQueryModel, NSString, NSMutableArray, AWESearchCachalotResultContext, AWEDoubleColumnSearchMerchandiseFilterComponentModel, AWESearchPOIFilterItemView, UIViewController;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchPOIFilterCardViewDelegate;

@interface AWESearchPOIFilterCardView : UIView <AWESearchPOIFilterItemViewDelegate, AWESearchCachalotControllerBizDelegate, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) AWESearchPOIFilterCardModel *cardModel;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (nonatomic) BOOL isInVerticalBaseEnv;
@property (nonatomic) BOOL hasQuickFilter;
@property (nonatomic) BOOL cardDidDisplay;
@property (nonatomic) double lastScrollEndOffsetY;
@property (nonatomic) double lastInCellOffsetY;
@property (nonatomic) double nowInCellOffsetY;
@property (nonatomic) double currentOffsetY;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *itemViewArr;
@property (retain, nonatomic) AWESearchPOIFilterItemView *quickFilterItemView;
@property (retain, nonatomic) AWESearchPOIFilterManager *filterManager;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel *queryModel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *selectingNormalModel;
@property (nonatomic) BOOL isFilterNotRank0;
@property (weak, nonatomic) id<AWESearchPOIFilterCardViewDelegate> cardDelegate;
@property (nonatomic) double showPanelOffset;
@property (nonatomic) double containerTopMargin;
@property (weak, nonatomic) UIViewController *pageController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)componentWillDisplay;
- (void)componentPrepareForReuse;
- (BOOL)shouldRespondToHit:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)componentItemView:(id)a0 didSelectItemWithFilterComponentModel:(id)a1;
- (BOOL)componentItemView:(id)a0 isSelectingWithItemModel:(id)a1;
- (void)p_handleAdjustInCardFrameWithScrollView:(id)a0;
- (void)pageDidScroll:(id)a0;
- (void)updateWithChunkModel:(id)a0;
- (void)addObserverForChunkModel;
- (void)removeObserverForChunkModel;
- (void)cachalotFeedDidScroll:(id)a0;
- (double)quickFilterContentOffSetX;
- (void)clearSelectingState;
- (void)setShowBottomLineView:(BOOL)a0;
- (void)setIsInCommonCachalotEnv;
- (void)p_updateContainerViewWithOffset:(double)a0;
- (BOOL)p_isNormalFilterModel:(id)a0;
- (BOOL)p_isAddressEditModel:(id)a0;
- (BOOL)p_isCalendarEditModel:(id)a0;
- (BOOL)p_isQuickFilterModel:(id)a0 itemView:(id)a1;
- (BOOL)p_isSpeedFilterModel:(id)a0 itemView:(id)a1;
- (BOOL)p_isCityFilterModel:(id)a0 itemView:(id)a1;
- (BOOL)p_isMultipleFunctionFilterModel:(id)a0 itemView:(id)a1;
- (BOOL)p_isHotelMultipleSelectionFilterModel:(id)a0 itemView:(id)a1;
- (void)updateWithCardModel:(id)a0 fromPatch:(BOOL)a1;
- (void)resetCardStatus;
- (void)updateCardDelegate;
- (void)p_scrollCardToFullState;
- (void)componentItemView:(id)a0 itemWillDisplay:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;
- (void)reloadContent;
- (void)updateWithViewModel:(id)a0;

@end
