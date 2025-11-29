@class YYLabel, NSString, UICollectionView, AFDCommentFriendsCollapseExpandCollectionViewCell, UIView, UILabel, AFDCommentFriendsDiggViewModel;

@interface AFDCommentFriendsDiggViewController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMSettingModelUpdateMessage, AWECommentFriendsDiggViewControllerProtocol>

@property (retain, nonatomic) UIView *diggView;
@property (nonatomic) double height;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AFDCommentFriendsDiggViewModel *viewModel;
@property (retain, nonatomic) AFDCommentFriendsCollapseExpandCollectionViewCell *collapseExpandCell;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dividingLine;
@property (retain, nonatomic) YYLabel *bottomPrivacyLabel;
@property (copy, nonatomic) id /* block */ heightChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCommentUIThemeChange:(BOOL)a0;
- (id)initWithAwemeModel:(id)a0 isBGColorWhite:(BOOL)a1;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)onAwemeDiggChanged:(id)a0;
- (void)updateViewModelProperty;
- (void)refreshDiggList;
- (void)updateSkeletonDiagramHeight;
- (void)setupBottomPrivacyTextUIIfNeeded;
- (void)updateRealHeight;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear;
- (void)dealloc;
- (void)setupCollectionView;
- (void)setupUI;

@end
