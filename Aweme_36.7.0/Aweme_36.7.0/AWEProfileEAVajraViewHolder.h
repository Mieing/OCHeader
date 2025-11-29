@class AWEProfileExtensionAreaScrollableHintManager, NSArray, AWEProfileHeaderProvidedServiceCollectionView, NSString, NSMutableArray;
@protocol AWEProfileEACollectionViewEvent;

@interface AWEProfileEAVajraViewHolder : AWEProfileEABaseViewHolder <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEProfileEADataSourceEvent, AWEProfileExtensionAreaScrollableHintExecuaterProtocol, AWEProfileEAHintProtocol, AWEProfileEAVajraViewHolderProtocol>

@property (retain, nonatomic) NSArray *cardList;
@property (nonatomic) BOOL shouldShrinkTitle;
@property (nonatomic) double cardGap;
@property (retain, nonatomic) NSMutableArray *cardSizeArray;
@property (nonatomic) double cardsTotalLength;
@property (nonatomic) double collectionViewWidth;
@property (retain, nonatomic) AWEProfileExtensionAreaScrollableHintManager *scrollHintManager;
@property (retain, nonatomic) AWEProfileHeaderProvidedServiceCollectionView *collectionView;
@property (retain, nonatomic) id<AWEProfileEACollectionViewEvent> collectionViewEventPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showHint;
- (void)showCardAtIndexPath:(id)a0 completion:(id /* block */)a1;
- (id)cardViewWithCardModel:(id)a0;
- (void)refreshCardList:(id)a0;
- (void)cardDataSourceDidRefresh;
- (unsigned long long)hintPriority;
- (BOOL)shouldShowHint;
- (void)showHintFailed;
- (void)computeLayout;
- (BOOL)canDoScrollableHint;
- (void)showScrollableHintWithCallBack:(id /* block */)a0;
- (void)setHintPreparationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })layoutSize;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (id)indexPathsForVisibleItems;
- (void)updateCollectionViewLayout;

@end
