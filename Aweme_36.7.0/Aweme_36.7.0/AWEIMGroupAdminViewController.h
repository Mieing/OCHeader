@class UIView, NSString, NSArray, UIImageView, NSDictionary, TTTAttributedLabel, UICollectionView, AWEIMMessageConversation, UILabel, UIScrollView;

@interface AWEIMGroupAdminViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMMessageConversationDelegate>

@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) UILabel *tipTitleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) TTTAttributedLabel *tipContentLabel;
@property (copy, nonatomic) NSArray *userArray;
@property (nonatomic) BOOL showAdd;
@property (nonatomic) BOOL showDelete;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL shouldUseWebcastProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)participantsDidUpdate;
- (void)backBtnClicked;
- (long long)cellNumber;
- (long long)cellTypeAtIndex:(long long)a0;
- (void)__transferToAddGroupAdminViewController;
- (void)p_trackModifyAdminIfNeededWithType:(long long)a0;
- (long long)bonusCellNumber;
- (void)__setupHeaderUI;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)fetchData;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
