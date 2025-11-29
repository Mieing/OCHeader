@class NSString, IESIMGroupBlockManagerModel, RxCollectionViewDiffableDataSource, AWEIMGroupBlockManagerViewDataSource, UICollectionView, AWEIMMessageConversation, UIViewController, NSCache;

@interface AWEIMGroupBlockManagerViewController : UIViewController <UICollectionViewDelegate, AWEIMGroupBlockCollectionCellDelegate, IESIMGroupBlockManagerViewControllerProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffDataSource;
@property (retain, nonatomic) AWEIMGroupBlockManagerViewDataSource *dataSource;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSCache *unblockingCache;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL speakModeVisible;
@property (retain, nonatomic) IESIMGroupBlockManagerModel *blockManagerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *backToVCWhenOperationFailed;

- (void)updateUITheme;
- (void)themeDidChange:(id)a0;
- (void)__setupUI;
- (void)__backBtnClicked;
- (void)__addKVO;
- (BOOL)enableNewStyle;
- (void)__createDataSource;
- (BOOL)p_isBigFontStyle;
- (id)initWithConversation:(id)a0 useNewStyle:(BOOL)a1 blockManagerModel:(id)a2;
- (void)__createCollectionViewDataSource;
- (double)p_fixedValue:(double)a0;
- (void)switchClickWithType:(long long)a0 isOn:(BOOL)a1;
- (void)unblockButtonClickWithUserId:(id)a0;
- (void)didClickAvatarWithUser:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)initWithConversation:(id)a0;

@end
