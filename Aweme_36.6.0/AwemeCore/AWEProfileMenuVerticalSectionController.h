@class AWEProfileMoreMenuViewModel;

@interface AWEProfileMenuVerticalSectionController : AWEBaseListSectionController

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) AWEProfileMoreMenuViewModel *parentViewModel;

- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryFooterView:(id)a0;
- (double)p_separatorHeight;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (Class)cellClass;
- (Class)footerViewClass;

@end
