@class AWEIMMessageConversation, NSArray, UICollectionView, NSString, UILabel, UIViewController;

@interface AWEIMGroupMemberBlockTimeChooseViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *confimLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSArray *uidArray;
@property (copy, nonatomic) NSArray *blockTimeData;
@property (copy, nonatomic) NSArray *blockTimeTextData;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIViewController *blockManagerVC;
@property (retain, nonatomic) UIViewController *backToVCWhenOperationFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__backBtnClicked;
- (id)initWithConversation:(id)a0 uidArray:(id)a1;
- (void)__buildDataSource;
- (void)__didTapConfirm;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
