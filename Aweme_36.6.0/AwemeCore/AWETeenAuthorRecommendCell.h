@class UIView, NSString, AWEBillboardLabel, AWETeenRecAuthor, UIButton, UICollectionView, UILabel, AWETeenUserAvatarView;

@interface AWETeenAuthorRecommendCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWETeenRecAuthor *model;
@property (retain, nonatomic) UIView *headerContainer;
@property (retain, nonatomic) AWETeenUserAvatarView *avatarView;
@property (retain, nonatomic) AWEBillboardLabel *authorNameLabel;
@property (retain, nonatomic) UILabel *subscribeCountLabel;
@property (retain, nonatomic) UILabel *workCountLabel;
@property (retain, nonatomic) UIButton *recommendReason;
@property (retain, nonatomic) UIButton *subscribeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL enablePushAuthorVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)avatarPlaceholder;
- (void)configWithModel:(id)a0;
- (void)updateSubscribeStatus;
- (void)clickSubscribeButton;
- (void)p_updateSubscribeStatus:(long long)a0 subscribedCount:(long long)a1;
- (void)p_subscribeAction;
- (void)clickHeaderContainer;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
