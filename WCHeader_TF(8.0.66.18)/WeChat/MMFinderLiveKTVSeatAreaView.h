@class OrderedDictionary, NSMutableArray, UICollectionView, MMLiveTaskId, NSString, MMFinderLiveTask, MMFinderLiveViewController;

@interface MMFinderLiveKTVSeatAreaView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, MMLiveTaskMgrExt, MMFinderLiveKTVStateExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (readonly, nonatomic) MMFinderLiveViewController *liveViewVC;
@property (retain, nonatomic) UICollectionView *seatCollectionView;
@property (retain, nonatomic) OrderedDictionary *seatOrderDict;
@property (retain, nonatomic) NSMutableArray *pendingSeatArr;
@property (retain, nonatomic) NSString *singingUserId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCollectionView;
- (double)collectionHeight;
- (unsigned long long)maxSeatCount;
- (id)getSeatInviteCellAtIndexPath:(id)a0;
- (id)getSeatUserCellAtIndexPath:(id)a0;
- (void)handleConnectMicUserViewTappedAtIndexPath:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onLiveTask:(id)a0 micUsersInfoChanged:(id)a1;
- (void)onLiveTask:(id)a0 isKTVModeChangedTo:(BOOL)a1;
- (void)onLiveTaskEnterLive:(id)a0;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singStateChanged:(long long)a2;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singerUserIdChanged:(id)a2;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 totalScoreChanged:(int)a2;
- (void)clearDatas;
- (void)onEnterKTVMode;
- (void)onMicUsersInfoChanged;
- (id)getCurrAllSeatUserList;
- (id)getMicSeatUserWithMicUserInfo:(id)a0;
- (id)getAnchorSeatUserWithMicUserInfo:(id)a0;
- (void)updateAllSeatUsersSingState;
- (void)onTotalScoreChange;
- (void).cxx_destruct;

@end
