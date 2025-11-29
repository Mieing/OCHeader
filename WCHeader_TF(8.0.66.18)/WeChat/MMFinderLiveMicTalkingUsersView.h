@class NSString, NSArray, UIImageView, MMFinderLiveTaskId, UIView, UILabel, UICollectionView;
@protocol MMFinderLiveMicTalkingUsersViewActionDelegate;

@interface MMFinderLiveMicTalkingUsersView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId;
@property (retain, nonatomic) NSArray *micTalkingUsers;
@property (retain, nonatomic) UIView *noUserTipView;
@property (retain, nonatomic) UIImageView *noUserTipIcon;
@property (retain, nonatomic) UILabel *noUserTipLabel;
@property (retain, nonatomic) UICollectionView *micUsersCollectionView;
@property (weak, nonatomic) id<MMFinderLiveMicTalkingUsersViewActionDelegate> actionDelegate;
@property (nonatomic) BOOL canShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1;
- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNoUserTipView;
- (void)layoutUsersCollectionView;
- (void)updateViewHidden;
- (void)updateWithMicTalkingUsers:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
