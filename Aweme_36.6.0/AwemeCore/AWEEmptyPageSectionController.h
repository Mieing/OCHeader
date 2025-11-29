@class NSString, AWEEmptyPageSectionInnerViewController;

@interface AWEEmptyPageSectionController : AWEBaseListSectionController <AWESetDefaultEmptyPageDelegate>

@property (retain, nonatomic) AWEEmptyPageSectionInnerViewController *emptyPageViewController;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)didBindSectionViewModel;
- (id)emptyPageViewController:(id)a0 emptyPageConfigForState:(unsigned long long)a1;
- (void)emptyPageViewController:(id)a0 emptyPagePrimaryButtonTapped:(id)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
