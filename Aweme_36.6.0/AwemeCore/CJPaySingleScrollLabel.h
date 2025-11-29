@class NSString, UICollectionView, CJPaySingleScrollModel, CJPayAmountScrollViewFlowLayout, UILabel;

@interface CJPaySingleScrollLabel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) BOOL isSymbolLabel;
@property (copy, nonatomic) NSString *symbol;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UICollectionView *scrollView;
@property (retain, nonatomic) CJPaySingleScrollModel *scrollModel;
@property (retain, nonatomic) CJPayAmountScrollViewFlowLayout *flowLayout;
@property (retain, nonatomic) UILabel *symbolTextLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateScrollLabelFontSize:(double)a0;
- (id)initWithFontSize:(double)a0 symbol:(id)a1;
- (void)updateContentLabelWithSymbol:(id)a0;
- (struct CGSize { double x0; double x1; })symbolDenoiseBoldFontOfSizeWithFont:(id)a0;
- (struct CGSize { double x0; double x1; })numberDenoiseBoldFontOfSizeWithFont:(id)a0;
- (void)scrollToTargetIndexWithScrollModel:(id)a0;
- (void)p_makeUI;
- (void)p_configSymbolLabel;
- (void)p_collectionViewScrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
