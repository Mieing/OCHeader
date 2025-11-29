@class AWEPadHorizontalSectionInnerViewModel;

@interface AWEPadHorizontalCellController : AWEPadListReusableViewBaseController

@property (weak, nonatomic) AWEPadHorizontalSectionInnerViewModel *innerSectionViewModel;

- (void)viewDidDisplay;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)viewDidEndDisplay;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (void).cxx_destruct;
- (Class)viewClass;

@end
