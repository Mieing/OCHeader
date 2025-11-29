@class UIView, NSString, NSMutableDictionary, IESLivePKNormalPanelViewModel, IESLivePKRecommendPanelView, UICollectionView, NSMutableArray, UIScrollView;
@protocol IESLivePKRecommendTabViewDelegate, IESLiveRevenueInteractProvider;

@interface IESLivePKRecommendTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout, IESLivePKRecommendTabBasePanelViewDelegate>

@property (retain, nonatomic) IESLivePKNormalPanelViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> provider;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) UIScrollView *tabScrollView;
@property (retain, nonatomic) IESLivePKRecommendPanelView *recommendPanelView;
@property (retain, nonatomic) NSMutableArray *dynamicPanelViewArray;
@property (retain, nonatomic) NSMutableDictionary *flexActivityViews;
@property (retain, nonatomic) NSMutableArray *tabViews;
@property (retain, nonatomic) NSMutableArray *subTabs;
@property (retain, nonatomic) NSMutableDictionary *unloadedFlexActivityIds;
@property (retain, nonatomic) NSMutableDictionary *loadedFlexActivityIds;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) BOOL hasFlexActivityTab;
@property (nonatomic) BOOL isNotTap;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL needTrackDefault;
@property (nonatomic) long long tabCount;
@property (nonatomic) long long currentTab;
@property (nonatomic) long long recommendTabIdx;
@property (retain, nonatomic) NSMutableArray *dynamicTabIdx;
@property (nonatomic) long long followTabIdx;
@property (nonatomic) struct CGPoint { double x; double y; } sliderOriginPoint;
@property (retain, nonatomic) NSMutableArray *panGestureRecognizers;
@property (weak, nonatomic) id<IESLivePKRecommendTabViewDelegate> recommendTabViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0 viewModel:(id)a1;
- (void)reloadDatas;
- (id)getPanGestureRecognizers;
- (void)didUpdatePanelScrollViewOffset:(id)a0 deltaY:(double)a1;
- (void)willPanelScrollViewBeginDragging;
- (void)willPanelScrollViewEndDragging;
- (void)updateFlexActivityPanelWithId:(id)a0;
- (BOOL)isListOpt;
- (void)setupFlexActivityTab;
- (void)updateSubTabLayout;
- (void)addTabViews;
- (void)selectTabWithIdx:(long long)a0;
- (void)trackPKSubTabShow:(unsigned long long)a0;
- (BOOL)didSubTabLoaded:(id)a0;
- (void)setupSubview;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;

@end
