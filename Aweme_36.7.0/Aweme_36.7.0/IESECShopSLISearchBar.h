@class IESECShopSearchBar;

@interface IESECShopSLISearchBar : IESECSliceXBaseContentElementView

@property (nonatomic) BOOL shouldShowSearchButtons;
@property (retain, nonatomic) IESECShopSearchBar *searchBar;

- (BOOL)setupElementView;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)showSearchButton:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
