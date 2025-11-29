@class UIView, NSString, UIImageView, UIButton, AWEIronManLandingPageCollectionViewModel, UICollectionView, AWEIronManLandingPageRecentlyUsedViewModel, UILabel, UIScrollView;
@protocol AWEIronManLandingPageCollectionAndReuseCellDelegate;

@interface AWEIronManLandingPageCollectionAndReuseCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, AWEIronManLandingPageItemInteractionDelegate>

@property (retain, nonatomic) UIView *segmentView;
@property (retain, nonatomic) UIButton *recentUseSegBtn;
@property (retain, nonatomic) UIButton *collectionSegBtn;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) UILabel *indicatorLabel;
@property (retain, nonatomic) UIView *segLineView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *collectionContentView;
@property (retain, nonatomic) UIView *collectionBgView;
@property (retain, nonatomic) UICollectionView *collectionItemView;
@property (retain, nonatomic) UILabel *collectionEmptyLabel;
@property (retain, nonatomic) UIView *recentUseContentView;
@property (retain, nonatomic) UIView *recentUseBgView;
@property (retain, nonatomic) UICollectionView *recentUseItemView;
@property (retain, nonatomic) UILabel *recentUseEmptyLabel;
@property (nonatomic) unsigned long long currentTab;
@property (nonatomic) double previousHeight;
@property (nonatomic) long long colNums;
@property (retain, nonatomic) AWEIronManLandingPageCollectionViewModel *collectionVM;
@property (retain, nonatomic) AWEIronManLandingPageRecentlyUsedViewModel *reuseVM;
@property (weak, nonatomic) id<AWEIronManLandingPageCollectionAndReuseCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (void)firstLoadFinished;
- (double)getCellHeight;
- (void)item:(id)a0 didRecieveAction:(unsigned long long)a1 extra:(id)a2;
- (void)clickSegBtnAction:(id)a0;
- (void)moreBtnAction;
- (void)basicLayout;
- (void)adjustSegBtnUI;
- (void)updateHeightCons;
- (void)updateContentHeight;
- (double)getCurrentHeightViaTab:(unsigned long long)a0;
- (void)tryUpdateTab:(unsigned long long)a0 from:(long long)a1;
- (void)trackItemShowWithItemModel:(id)a0 event:(id)a1 extra:(id)a2;
- (id)buildMenuItemWithTab:(unsigned long long)a0 collected:(BOOL)a1 itemModel:(id)a2;
- (void)showPopoverMemuWithTarget:(id)a0 actions:(id)a1;
- (void)updateSegCons;
- (void)trackEnterCollectionWithFrom:(long long)a0;
- (void)didReceivedUserAction:(unsigned long long)a0 itemModel:(id)a1;
- (void)trackUserClickPopEvent:(long long)a0 itemModel:(id)a1;
- (void)afterScrollEnd;
- (void)updateWhenDisplay;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)addObserver;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)buildCollectionView;
- (void)refreshData;
- (void)setUpUI;

@end
