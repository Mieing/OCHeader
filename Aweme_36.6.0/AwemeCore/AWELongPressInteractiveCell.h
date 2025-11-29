@class NSString, UICollectionView, NSMutableSet, UILabel, UIView, AWELongPressPanelViewGroupModel;

@interface AWELongPressInteractiveCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, AWELongPressInteractiveShareCellDelegate, AWEShareTextInputViewManagerDelegate, AWELongPressInteractiveCellProtocol>

@property (retain, nonatomic) UIView *iconBackView;
@property (retain, nonatomic) UILabel *shareLabel;
@property (retain, nonatomic) NSMutableSet *trackChatShowSet;
@property (retain, nonatomic) NSMutableSet *trackRecentlyChatShowSet;
@property (nonatomic) BOOL needSupportShareText;
@property (retain, nonatomic) AWELongPressPanelViewGroupModel *interactiveGroupModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interactiveCellReload;
- (void)trackCellShowWithVM:(id)a0;
- (BOOL)isCellShowMoreThanHalf:(id)a0;
- (void)setupShareTextView;
- (void)interactiveShareCellDelegateDidLongpressAvatar:(id)a0 gesRecognizer:(id)a1;
- (void)setSheetBackgroundColor:(id)a0 iconBackgroundColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupObservers;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)setUpCollectionView;
- (void)setUpUI;

@end
