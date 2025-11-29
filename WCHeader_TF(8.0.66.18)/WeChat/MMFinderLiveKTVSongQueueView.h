@class MMUIImageView, WCFinderContact, UICollectionView, MMLiveTaskId, MMFinderLiveKtvPlayerWaitListInfo, NSString, MMUILabel;

@interface MMFinderLiveKTVSongQueueView : UIView <MMFinderLiveKTVManageExt, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveKtvPlayerWaitListInfo *waitListInfo;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIImageView *arrowImageView;
@property (retain, nonatomic) MMUIImageView *inviteImage;
@property (retain, nonatomic) UICollectionView *playerCollectionView;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) MMUILabel *actionLabel;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (double)preferWidth;
- (double)preferHeight;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)liveTask;
- (void)updateState;
- (void)onLiveKTVPlayerWaitListInfoUpdate:(id)a0 source:(long long)a1 taskId:(id)a2;
- (void)onClickedAction;
- (void).cxx_destruct;

@end
