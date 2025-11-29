@class NSArray, NSString, UICollectionView;

@interface AWEIMEmoticonSearchPanelHotWordView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) NSArray *oftenSearchWords;
@property (copy, nonatomic) NSArray *operationWords;
@property (copy, nonatomic) NSArray *hotwords;
@property (copy, nonatomic) id /* block */ didSelectHotWordBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackTagShow;
- (void)renderWithHotWordArray:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)p_typeOfWord:(id)a0;
- (BOOL)p_isOftenSearchWord:(id)a0;
- (void)trackTagClickWithModel:(id)a0;
- (id)tagTypeStringWithType:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
