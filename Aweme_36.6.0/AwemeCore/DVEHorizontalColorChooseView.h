@class NSArray, NSDictionary, DVEStoryColor, NSString, UICollectionView;

@interface DVEHorizontalColorChooseView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) DVEStoryColor *selectedColor;
@property (copy, nonatomic) NSArray *colorValues;
@property (nonatomic) BOOL cellIsAccessibility;
@property (retain, nonatomic) NSDictionary *colorAccessibilityLabelDic;
@property (retain, nonatomic) NSString *cellIdentifier;
@property (copy, nonatomic) id /* block */ didSelectedColorBlock;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectWithIndexPath:(id)a0;
- (void)selectWithColor:(id)a0;
- (void)updateColorValues:(id)a0;
- (void)updateSelectedColorWithIndexPath:(id)a0;
- (void)setupColorAccessibilityLabel;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
