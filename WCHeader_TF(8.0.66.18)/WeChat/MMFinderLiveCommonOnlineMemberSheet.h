@class UIView, MMUIImageView, UIScrollView, MMFinderLiveCommonOnlineMemberSheetOpenParams, WCPinBottomCollectionViewFlowLayout, NSString, MMFinderLiveTaskId, NSMutableArray, UICollectionView, MMLiveHalfScreenTitleBarView, RichTextView, MMUIActivityIndicatorView;
@protocol MMLiveOnlineStateViewDelegate;

@interface MMFinderLiveCommonOnlineMemberSheet : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegate, MMFinderLiveOnlineStateCollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, MMLiveHalfScreenTitleBarViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveCommonOnlineMemberSheetOpenParams *openParams;
@property (weak, nonatomic) id<MMLiveOnlineStateViewDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *userList;
@property (nonatomic) unsigned long long titleHeatValue;
@property (retain, nonatomic) MMUIImageView *backgroundView;
@property (retain, nonatomic) MMUIActivityIndicatorView *onlineContentLoadingView;
@property (retain, nonatomic) UIScrollView *tabScrollView;
@property (retain, nonatomic) NSMutableArray *tabPositions;
@property (retain, nonatomic) NSMutableArray *tabLabels;
@property (retain, nonatomic) UIView *tabIndicatorView;
@property (retain, nonatomic) UICollectionView *onlineUsersCollectionView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar;
@property (retain, nonatomic) RichTextView *noUserLabel;
@property (nonatomic) unsigned int boardMemberCount;
@property (nonatomic) unsigned long long currentSelectIndex;
@property (retain, nonatomic) WCPinBottomCollectionViewFlowLayout *onlineUsersCollectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 openParams:(id)a1;

- (id)initWithTaskId:(id)a0 openParams:(id)a1;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)initTabPageView;
- (id)selectedColor;
- (id)normalColor;
- (void)onTapTab:(id)a0;
- (void)setupViewsContents;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)fetchData;
- (void)rankOnlineStateItems:(id)a0;
- (struct CGSize { double x0; double x1; })getNoUserLabelSize;
- (id)createNoUserLabel;
- (void)updateOnlineUsersRankWith:(id)a0 onlineUserStateItems:(id)a1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)createSectionHeader:(struct CGSize { double x0; double x1; })a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)showRewardAmount;
- (BOOL)isPkRank;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)liveTask;
- (void).cxx_destruct;

@end
