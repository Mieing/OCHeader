@class NSArray, UICollectionView, NSString, NSIndexPath, CJPayDefaultChannelShowConfig;

@interface CJPayDyPayQuailtyMethodCreditPayCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (copy, nonatomic) NSArray *creditPayMethods;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL scrollAnimated;
@property (copy, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setHidden:(BOOL)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
