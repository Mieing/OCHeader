@class MMBGMPanelPublishContext, NSString, MMBGMSelectedTabBarView, UIScrollView, NSMutableArray, MMBGMSelectedConfig;
@protocol MMBGMSearchResultContainerViewDelegate;

@interface MMBGMSearchResultContainerView : MMUIView <MMBGMSelectedSearchResultViewDelegate, MMBGMSelectedTabBarViewDelegate, UIScrollViewDelegate, MMBGMChooseFinderFeedListViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *searchResultViews;
@property (retain, nonatomic) MMBGMSelectedTabBarView *tabBar;
@property (nonatomic) long long currentTabIndex;
@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (weak, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (weak, nonatomic) id<MMBGMSearchResultContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setup;
- (void)setupViews;
- (void)setupLayout;
- (void)setupData;
- (void)reset;
- (void)reload;
- (void)resetAllTabIndex;
- (void)resetCurrentTabIndex;
- (void)unSelectedAllItem;
- (void)autoStopSelectedCellPlayingState;
- (void)autoSetSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)a0;
- (id)musicDataAtIndex:(unsigned long long)a0;
- (id)currentSelectedmusicData;
- (void)startCurrentTabFooterLoading;
- (void)stopCurrentTabFooterLoading;
- (BOOL)startSearchWithKey:(id)a0;
- (id)currentSearchResultView;
- (id)getCurrentSearchWord;
- (void)setHidden:(BOOL)a0;
- (void)setFeedSearchResultViewAppearIfNeeded;
- (void)reportResultAppearAction;
- (void)setFeedSearchResultViewDisApperaIfNeeded;
- (void)setFeedSearchResultViewShowUp;
- (void)setFeedSearchResultViewCloseDown;
- (void)_updateScrollViewOffset;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)bgmSelectedSearchResultViewGetSearchWord:(id)a0;
- (void)onBgmSelectedSearchResultView:(id)a0 didSelectedMusic:(id)a1 atIndex:(unsigned long long)a2 isTriggerByTap:(BOOL)a3;
- (void)onBgmSelectedSearchResultView:(id)a0 didEditMusic:(id)a1 atIndex:(unsigned long long)a2;
- (id)onBgmSelectedSearchResultView:(id)a0 willSelectMusic:(id)a1 indexPath:(id)a2;
- (void)onBgmSelectedSearchResultView:(id)a0 willShowMusic:(id)a1 musicIndex:(unsigned long long)a2;
- (unsigned long long)bgmSelectedSearchResultViewGetMaterialDuration:(id)a0;
- (void)onBgmSelectedSearchResultView:(id)a0 didSearchWithKey:(id)a1;
- (void)onBgmSelectedSearchResultViewWillBeginDragging:(id)a0;
- (void)onBgmSelectedSearchResultView:(id)a0 didFavMusic:(id)a1 atIndex:(unsigned long long)a2;
- (void)onBgmSelectedSearchResultView:(id)a0 didRemoveMusic:(id)a1 atIndex:(unsigned long long)a2;
- (void)bgmSelectedTabBarView:(id)a0 didSelectedIndex:(long long)a1;
- (void)bgmChooseFinderFeedListView:(id)a0 didSelectedMusic:(id)a1 atIndex:(unsigned long long)a2;
- (void)bgmChooseFinderFeedListView:(id)a0 didClickEditButtonWithMusic:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)bgmChooseFinderFeedListViewIsShowingInView:(id)a0;
- (unsigned long long)bgmChooseFinderFeedListViewGetMaterialDuration:(id)a0;
- (void)bgmChooseFinderFeedListViewWillStartPlayingVideo:(id)a0;
- (void)bgmChooseFinderFeedListViewWillStopPlayingVideo:(id)a0;
- (void)bgmChooseFinderFeedListViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
