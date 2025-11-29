@class NSString, NSArray, AWEVideoPublishViewModel, ACCSocialStickeMentionBindingModel, NSDictionary, NSMutableSet, UICollectionView, NSMutableArray, UILabel;
@protocol ACCTextInputUserServiceProtocol;

@interface ACCSocialStickerEditToolbar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSString *searchKeyWord;
@property (retain, nonatomic) ACCSocialStickeMentionBindingModel *selectMentionBindingModel;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCTextInputUserServiceProtocol> userService;
@property (nonatomic) unsigned long long loadStatus;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL isFetchingRecommendUser;
@property (nonatomic) BOOL didFetchRecommendUserSucceedOnceFlag;
@property (copy, nonatomic) id /* block */ lastWaitFetchRecommendUserResultHandler;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSArray *users;
@property (copy, nonatomic) NSArray *challenges;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableSet *videoAtListShowTrackedUser;
@property (retain, nonatomic) NSMutableArray *sugTrackedUser;
@property (retain, nonatomic) NSString *sugSessionID;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) unsigned long long stickerType;
@property (copy, nonatomic) id /* block */ onSelectMention;
@property (copy, nonatomic) id /* block */ onSelectHashTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaulBarHeight;

- (void)searchWithKeyword:(id)a0;
- (void)updateSelectedMention:(id)a0;
- (void)p_updateSugSessionID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1;
- (void)updateLoadStatus:(unsigned long long)a0;
- (BOOL)isSelectedUserWithTargetUserModel:(id)a0;
- (void)remakeLayout;
- (void)cleanFetchedData;
- (void)fetchRecommendUsersThen:(id /* block */)a0;
- (void)handleHashTagFetchSucceed:(id)a0 keyword:(id)a1;
- (void)updateTitleShowStatus;
- (BOOL)needHandleDataCallbackWithKeyword:(id)a0;
- (void)fetchMoreUser;
- (void)handleUserDataFetchSucceed:(id)a0 keyword:(id)a1;
- (void)p_trackSugTrendingShowWithWordsNum:(long long)a0;
- (void)registerCollectionView;
- (void)tagDurationTraceWithStart:(double)a0 keyword:(id)a1;
- (BOOL)isMentionSticker;
- (void)p_trackShowTagWords:(id)a0 rank:(long long)a1;
- (void)p_trackAddTag:(id)a0 rank:(long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)cancelSearch;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)setupData;
- (void)reloadView;

@end
