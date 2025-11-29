@interface AWENearbySwitchCitySection : AWENearbySwitchSection

@property (copy, nonatomic) id /* block */ selectBlock;

- (struct CGSize { double x0; double x1; })sizeForHeader;
- (id)getDisplayCities;
- (long long)numberOfItems;
- (long long)pageType;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)a0;

@end
