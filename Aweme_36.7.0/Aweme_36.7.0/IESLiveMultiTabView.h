@class UIView, NSString, IESLiveMultiTabCollectionView, NSArray, IESLiveMultiTabSelectionView, UIImageView, IESLiveMultiTabModel, IGListAdapter;
@protocol IESLiveBubbleGuide, IESLiveMultiTabViewDelegate;

@interface IESLiveMultiTabView : UIView <IGListAdapterDataSource, IESLiveMultiTabSelectionViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLiveMultiTabCollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (copy, nonatomic) NSArray *tabModels;
@property (copy, nonatomic) NSArray *sectionControllers;
@property (nonatomic) unsigned long long beginDragSelectedIndex;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long lastSelectedIndex;
@property (nonatomic) BOOL isReloading;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *bubbleGuideView;
@property (retain, nonatomic) IESLiveMultiTabModel *bubbleTabModel;
@property (retain, nonatomic) IESLiveMultiTabSelectionView *tabSelectionView;
@property (weak, nonatomic) id<IESLiveMultiTabViewDelegate> delegate;
@property (nonatomic) BOOL enableUseTabBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScrollEnable:(BOOL)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)voiceOverStatusChange;
- (double)currentTabIndicatorPosition;
- (void)bindingSectionController;
- (void)reloadSectionController;
- (void)sendDidSelectedSection;
- (void)reloadWithTabModels:(id)a0 selectIndex:(long long)a1;
- (void)tabSelectionView:(id)a0 didSelectedIndex:(long long)a1;
- (void)refreshTabBubbleIfNeed;
- (void)reloadSelectionTabView;
- (void)p_removeTabBubbleAction:(id)a0;
- (BOOL)couldRecognizeSimultaneouslyWithPanGestureRecognizer:(id)a0;
- (id)initWithTabModels:(id)a0 diContext:(id)a1;
- (void)updateTabSelectionWithMarginWidth:(double)a0 titleWidth:(double)a1;
- (void)reloadWithTabModelsWithoutTitle:(id)a0 selectIndex:(long long)a1;
- (void)hideSelectTabView;
- (void)showSelectTabView;
- (void)showIndicatorView:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)flowLayout;
- (void)setupViews;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;

@end
