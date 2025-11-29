@class RichTextView, NSString, MMUIActivityIndicatorView, MMFinderLiveTaskId, UICollectionView, NSMutableArray, MMLiveHalfScreenTitleBarView;
@protocol MMLiveOnlineStateViewDelegate;

@interface MMFinderLiveConnectMicUserRewarderSheet : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegate, MMFinderLiveOnlineStateCollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, MMLiveHalfScreenTitleBarViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMLiveOnlineStateViewDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *userList;
@property (retain, nonatomic) NSString *micId;
@property (retain, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;
@property (nonatomic) unsigned long long titleHeatValue;
@property (retain, nonatomic) MMUIActivityIndicatorView *onlineContentLoadingView;
@property (retain, nonatomic) UICollectionView *onlineUsersCollectionView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar;
@property (retain, nonatomic) RichTextView *noUserLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 micId:(id)a1 boardKey:(id)a2 boardType:(unsigned int)a3 titleHeatValue:(unsigned long long)a4;

- (id)initWithTaskId:(id)a0 micId:(id)a1 boardKey:(id)a2 boardType:(unsigned int)a3 titleHeatValue:(unsigned long long)a4;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)setupViewsContents;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)fetchData;
- (void)rankOnlineStateItems:(id)a0;
- (id)createNoUserLabel;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)createSectionHeader:(struct CGSize { double x0; double x1; })a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)liveTask;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
