@class NSString, UICollectionViewDiffableDataSource, MMFinderLiveConnectMicPKInfo, UICollectionView;

@interface MMFinderLiveConnectMicTeamPkPanel : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo;
@property (nonatomic) BOOL isApplicant;
@property (copy, nonatomic) id /* block */ pkBlock;
@property (copy, nonatomic) id /* block */ quitMicBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showWithPkInfo:(id)a0 isApplicant:(BOOL)a1;
- (void)updateWithPkInfo:(id)a0;
- (BOOL)useDiffableDatasourceWithCompositionalLayout;
- (void)requestDismiss;
- (double)pageSheetContentHeight;
- (void)initViews;
- (id)makeCloseButton;
- (void)closeAction;
- (void)layoutSubviews;
- (void)setupDataSourceIfNeeded;
- (id)defaultSnapshot;
- (id)createLayout;
- (double)itemSpacingWithSection:(long long)a0;
- (id)createTeam1Section:(id)a0;
- (id)createTeam2Section:(id)a0;
- (void)changeTeamToAnother:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;

@end
