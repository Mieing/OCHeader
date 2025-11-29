@class CAGradientLayer, NSArray, UICollectionView, NSString, AWEVideoPublishViewModel, NSMutableArray, UIView;
@protocol ACCFriendsServiceProtocol;

@interface ACCQuickFlashStickerEditToolbar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCFriendsServiceProtocol> friendsService;
@property (nonatomic) unsigned long long loadStatus;
@property (copy, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSMutableArray *selectedUserIdList;
@property (retain, nonatomic) UIView *littleInspirationView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL gradientLayerFadeout;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) unsigned long long limitSelectedCount;
@property (copy, nonatomic) id /* block */ didSelectUserBlock;
@property (copy, nonatomic) id /* block */ clickLittleInspirationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaulBarHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1;
- (void)fetchRecommendUsers;
- (void)updateLoadStatus:(unsigned long long)a0;
- (void)handleUserDataFetchSucceed:(id)a0;
- (BOOL)isSelectedUserWithTargetUserModel:(id)a0;
- (void)littleInspirationTap:(id)a0;
- (void)updateSelectedUserIds:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)show;
- (void)setupUI;
- (void)setupData;
- (void)reloadView;

@end
