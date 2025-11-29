@class NSArray, UICollectionView, IESLiveAudienceInteractiveAnchorInviteAiGuestView, NSString;

@interface IESLiveAudienceInteractiveAnchorInviteFriendHorizontalView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSArray *aiGuestList;
@property (retain, nonatomic) IESLiveAudienceInteractiveAnchorInviteAiGuestView *aiGuestView;
@property (retain, nonatomic) UICollectionView *friendListView;
@property (copy, nonatomic) id /* block */ clickUserBlock;
@property (copy, nonatomic) id /* block */ clickMoreBlock;
@property (copy, nonatomic) id /* block */ userCellDidShowBlock;
@property (copy, nonatomic) id /* block */ moreCellDidShowBlock;
@property (copy, nonatomic) id /* block */ aiGuestCellDidShowBlock;
@property (copy, nonatomic) id /* block */ clickAiGuestBlock;
@property (nonatomic) BOOL moreCellDidShow;
@property (nonatomic) BOOL aiGuestCellDidShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)didClickAiGuest;
- (void)updateWithUserList:(id)a0 aiGuestList:(id)a1 clickUserBlock:(id /* block */)a2 clickMoreBlock:(id /* block */)a3 userCellDidShowBlock:(id /* block */)a4 moreCellDidShowBlock:(id /* block */)a5 aiGuestCellDidShowBlock:(id /* block */)a6 clickAiGuestBlock:(id /* block */)a7;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;

@end
