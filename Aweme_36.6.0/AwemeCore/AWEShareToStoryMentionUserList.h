@class UILabel, NSString, AWEShareToStoryMentionUserListViewModel, NSDictionary, AWEVideoPublishViewModel, NSArray, UICollectionView;
@protocol AWEShareToStoryMentionUserListDataDelegate;

@interface AWEShareToStoryMentionUserList : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSString *searchKeyWord;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEShareToStoryMentionUserListViewModel *mentionUserListViewModel;
@property (nonatomic) unsigned long long loadStatus;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL isFetchingRecommendUser;
@property (nonatomic) BOOL didFetchRecommendUserSucceedOnceFlag;
@property (copy, nonatomic) id /* block */ lastWaitFetchRecommendUserResultHandler;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSArray *users;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isLightTheme;
@property (weak, nonatomic) id<AWEShareToStoryMentionUserListDataDelegate> handlerDataDelegate;
@property (copy, nonatomic) id /* block */ onSelectMention;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaulBarHeight;

- (void)searchWithKeyword:(id)a0;
- (BOOL)p_isSelectedUser:(id)a0;
- (void)updateLoadStatus:(unsigned long long)a0;
- (void)remakeLayout;
- (void)cleanFetchedData;
- (void)fetchRecommendUsersThen:(id /* block */)a0;
- (void)updateTitleShowStatus;
- (BOOL)needHandleDataCallbackWithKeyword:(id)a0;
- (void)fetchMoreUser;
- (void)handleUserDataFetchSucceed:(id)a0 keyword:(id)a1;
- (id)initWithPublishModel:(id)a0 isLightTheme:(BOOL)a1;
- (void)resetCollectionViewContentOffset;
- (void)addTopAndBottomDivider;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)cancelSearch;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)setupData;
- (void)reloadView;

@end
