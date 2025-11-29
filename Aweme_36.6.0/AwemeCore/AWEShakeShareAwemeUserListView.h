@class NSString, NSArray, AWEShakeShareAwemeUserCollectionViewLayout, AWEUserModel, NSObject, LOTAnimationView, UICollectionView, UILabel;
@protocol AWEShakeShareAwemeUserListViewDelegate, NSCopying;

@interface AWEShakeShareAwemeUserListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEShakeShareAwemeUserCollectionViewCellDelegate>

@property (retain, nonatomic) LOTAnimationView *rippleView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *emptyTipsLabel;
@property (retain, nonatomic) AWEShakeShareAwemeUserCollectionViewLayout *collectionViewLayout;
@property (nonatomic) BOOL updatingUserList;
@property (nonatomic) BOOL stoppedHeartBreakSinceLastUpdate;
@property (retain, nonatomic) NSString *trackedCellUserID;
@property (retain, nonatomic) NSObject<NSCopying> *trackedCellStateID;
@property (retain, nonatomic) NSArray *userList;
@property (weak, nonatomic) id<AWEShakeShareAwemeUserListViewDelegate> delegate;
@property (readonly, nonatomic) AWEUserModel *currentUser;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)cellStateDidUpdate:(id)a0;
- (double)rippleViewSize;
- (double)getInteritemSpacing;
- (void)p_setUserList:(id)a0;
- (void)updateUserListWithOldUserList:(id)a0 newUserList:(id)a1;
- (BOOL)p_needUpdateUser:(id)a0 newUser:(id)a1;
- (void)updateUserNameLabel;
- (void)updateCellPosition;
- (void)p_trackAddFriendBtnShowOnCell:(id)a0;
- (void)didStopHeartBreak;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupLayout;

@end
