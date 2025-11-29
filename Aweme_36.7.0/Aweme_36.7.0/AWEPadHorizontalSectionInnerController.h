@class AWEPadHorizontalSectionInnerViewModel;

@interface AWEPadHorizontalSectionInnerController : AWEPadBaseListSectionController

@property (weak, nonatomic) AWEPadHorizontalSectionInnerViewModel *viewModel;

+ (Class)sectionViewModelClass;

- (void)configSupplementaryHeaderView:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
