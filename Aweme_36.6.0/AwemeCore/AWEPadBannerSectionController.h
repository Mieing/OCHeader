@class AWEPadBannerSectionViewModel;

@interface AWEPadBannerSectionController : AWEPadBaseListSectionController

@property (readonly, nonatomic) AWEPadBannerSectionViewModel *viewModel;

+ (Class)sectionViewModelClass;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)containerViewDidAppear;
- (struct CGSize { double x0; double x1; })cellContentSizeWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)containerViewDidDisappear;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (long long)numberOfItems;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
