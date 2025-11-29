@class RichTextView, NSString, UICollectionView, MMGroupLiveOnlineUserLogic, NSMutableArray;

@interface MMGroupLiveOnlineStateView : MMLiveOnlineStateView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMLiveOnlineStateCollectionCellDelegate, MMGroupLiveOnlineUserLogicDelegate>

@property (retain, nonatomic) UICollectionView *onlineUsersCollectionView;
@property (retain, nonatomic) MMGroupLiveOnlineUserLogic *onlineUserLogic;
@property (retain, nonatomic) NSMutableArray *userList;
@property (retain, nonatomic) RichTextView *noUserLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)liveTask;
- (id)getNoUserLabelTitle;
- (id)getOnlineUserCountTitle:(unsigned long long)a0;
- (id)getOnlineButtonTitle:(unsigned long long)a0;
- (void)initView;
- (void)reloadData;
- (void)layoutContentView;
- (void)onFetchGroupOnlineUserListWithError:(id)a0 userList:(id)a1;
- (void)onKickAudienceForGroupLiveWithError:(id)a0 userName:(id)a1;
- (void)onHeadImageClicked:(id)a0 userItem:(id)a1;
- (id)onlineUsersScrollView;
- (id)getOnlineUsersScrollView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;

@end
