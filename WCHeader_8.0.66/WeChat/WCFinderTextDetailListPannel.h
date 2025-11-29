@class WCFinderAnimationLoadingView, NSString, UICollectionView, AnyPromise, UILabel, NSMutableArray;

@interface WCFinderTextDetailListPannel : WCFinderCustomPanelSheet <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderTextDetailItemDelegate>

@property (retain, nonatomic) NSString *emptyWording;
@property (nonatomic) int scene;
@property (retain, nonatomic) AnyPromise *sessionsPromise;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) UICollectionView *flowView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *warnningLabel;
@property (copy, nonatomic) id /* block */ refetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithTitle:(id)a0 sections:(id)a1 scene:(int)a2 refetch:(id /* block */)a3;

- (void)setupSections:(id)a0;
- (id)loadContentView;
- (void)viewDidLoad;
- (void)onClickRetry;
- (void)waitFillData;
- (void)startLoading;
- (void)showWarnningLabel:(id)a0 allowRetry:(BOOL)a1;
- (id)createCollectionView;
- (id)configEmptyWording:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)onHeaderClickExpandFold:(id)a0;
- (void)onItemClickContent:(id)a0;
- (void).cxx_destruct;

@end
