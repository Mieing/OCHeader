@class AWEIMManagerCustomEmoticonNavView, UITapGestureRecognizer, UICollectionView, NSArray, NSString, NSMutableArray, AWEIMEmoticonManagerDeleteView;

@interface AWEIMManagerCustomEmoticonViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMManagerCustomEmoticonCollectionViewCellActionDelegate>

@property (retain, nonatomic) AWEIMManagerCustomEmoticonNavView *navView;
@property (retain, nonatomic) AWEIMEmoticonManagerDeleteView *deleteView;
@property (retain, nonatomic) AWEIMEmoticonManagerDeleteView *peakView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *selectedEmoticonArray;
@property (nonatomic) BOOL isManaging;
@property (retain, nonatomic) UITapGestureRecognizer *manageGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *finishGestureRecognizer;
@property (retain, nonatomic) NSArray *sourceArray;
@property (nonatomic) BOOL isGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadCollectionView;
- (void)successAddCustomSticker;
- (void)didLongPressCell:(id)a0;
- (void)cell:(id)a0 changeSelectStatus:(BOOL)a1 emoticon:(id)a2;
- (void)didLoadMoreData;
- (void)continueManage;
- (void)openLibrary;
- (void)loadMoreDataIfNeed;
- (void)manageCustomEmoticon;
- (void)finishManage;
- (void)deleteCustomEmoticon;
- (void)peakCustomEmoticon;
- (void)closeView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
