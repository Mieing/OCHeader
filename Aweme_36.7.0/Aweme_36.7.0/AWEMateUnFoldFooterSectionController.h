@class AFDColletionViewListExpandFooterView;

@interface AWEMateUnFoldFooterSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AFDColletionViewListExpandFooterView *footerView;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryFooterView:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)footerViewClass;

@end
