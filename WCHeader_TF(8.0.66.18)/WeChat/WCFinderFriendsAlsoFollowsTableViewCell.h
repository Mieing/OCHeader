@class UIView, FavAttributeCPLabel, WCFinderMaskButton, NSString, WCFinderAuthInfoIconView, UICollectionView, WCFinderHeadImageView, UILabel, WCFinderAccoutItem;
@protocol WCFinderFriendsAlsoFollowsTableViewCellDelegate;

@interface WCFinderFriendsAlsoFollowsTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderHeadImageView *headImgView;
@property (retain, nonatomic) FavAttributeCPLabel *nameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authView;
@property (retain, nonatomic) UILabel *friendFollowCountLabel;
@property (retain, nonatomic) WCFinderMaskButton *followButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCFinderAccoutItem *acctItem;
@property (retain, nonatomic) UILabel *emptyTipsLabel;
@property (nonatomic) int commentScene;
@property (weak, nonatomic) id<WCFinderFriendsAlsoFollowsTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collectionHWithSelfW:(double)a0;
+ (double)cellWWithCollW:(double)a0;
+ (double)cellHWithCollW:(double)a0;
+ (id)cellID;
+ (double)cellHWithW:(double)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithDataInfo:(id)a0 commentScene:(int)a1;
- (void)updateFollowBtnWithContactFollowState:(unsigned long long)a0 privateState:(BOOL)a1;
- (void)layoutSubviews;
- (double)getCurrentNameMaxWidth;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)cellAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onClickFollowButton;
- (void).cxx_destruct;

@end
