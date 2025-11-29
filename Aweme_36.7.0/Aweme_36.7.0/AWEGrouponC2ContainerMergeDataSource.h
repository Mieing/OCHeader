@class NSArray, AWEGrouponPageContext, NSString;

@interface AWEGrouponC2ContainerMergeDataSource : NSObject <UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *delegates;
@property (nonatomic) BOOL isInitFetchFinish;
@property (nonatomic) BOOL hasTransformerCache;
@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpBinding;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 cellWidth:(double)a2 sizeForItemAtIndexPath:(id)a3;
- (id)cellForGuideTipsItemAtIndexPath:(id)a0 collection:(id)a1 itemModel:(id)a2;
- (id)cellForTransformerItemAtIndexPath:(id)a0 collection:(id)a1 itemModel:(id)a2;
- (id)initWithDataSourceDelegateArray:(id)a0 pageContext:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)feed;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)transformer;

@end
