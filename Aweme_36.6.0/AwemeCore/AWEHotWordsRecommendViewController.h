@class NSString, UICollectionView, UICollectionViewFlowLayout, NSMutableArray, AWEHotSpotInnerContext;

@interface AWEHotWordsRecommendViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) NSMutableArray *hotPointModels;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOrHiddenCollectionView:(BOOL)a0;
- (void)refreshWithData:(id)a0 currentRecommendWord:(id)a1;
- (void)trackTrendingTopicForEvent:(id)a0 searchModel:(id)a1 indexPath:(id)a2 withOtherParams:(id)a3;
- (double)calculateContentWidth:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end
