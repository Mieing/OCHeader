@class IESLiveSegmentedControl, IESLiveVideoShareSelectCollectionView, NSArray, UIView, IESLiveVideoShareDetailView, NSString, UIButton, IESLiveVideoShareSelectInfo, NSMutableArray, IESLiveVideoShareSelectTabBar, UILabel, UIScrollView;

@interface IESLiveVideoShareSelectView : IESLiveCommentExpandDetailView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, IESLiveVideoShareSelectViewInterface>

@property (copy, nonatomic) NSArray *videoTabList;
@property (retain, nonatomic) NSMutableArray *collectionViewList;
@property (retain, nonatomic) IESLiveVideoShareSelectInfo *selectedVideoInfo;
@property (retain, nonatomic) IESLiveSegmentedControl *segControl;
@property (retain, nonatomic) IESLiveVideoShareSelectTabBar *tabBar;
@property (retain, nonatomic) UILabel *bannerView;
@property (retain, nonatomic) UIScrollView *selectScrollView;
@property (retain, nonatomic) IESLiveVideoShareSelectCollectionView *selectCollectionView;
@property (retain, nonatomic) UIButton *keyBoardAndSendBtn;
@property (nonatomic) BOOL bottomSelectTabStyle;
@property (retain, nonatomic) UIView *searchMoreView;
@property (retain, nonatomic) IESLiveVideoShareDetailView *videoShareDetailView;
@property (nonatomic) BOOL trackListFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didClickKeyBoardBtn;

- (id)initWithDIContext:(id)a0;
- (void)showKeyBoard;
- (void)trackVideoListShow;
- (void)loadCollectionView;
- (void)hideBannerWithAnimation;
- (void)setSegControlIndexChangeBlock;
- (void)scrollToDefaultTab;
- (void)addErrorReloadViewWithTab:(id)a0;
- (void)addDataEmptyRemindViewWithTab:(id)a0;
- (id)titlesForSegmentControl;
- (long long)scrollCollectionViewCount;
- (void)btnDidClicked;
- (void)reloadAllCollectionViewData;
- (void)sendSelectedVideo;
- (void)trackSearchEntryWithAction:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)show;
- (void)layoutUI;

@end
