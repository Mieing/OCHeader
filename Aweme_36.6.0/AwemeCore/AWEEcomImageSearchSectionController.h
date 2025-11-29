@class AWEEcomImageSearchSectionDataStore, NSString;
@protocol AWEEcomImageSearchSectionControllerDelegate;

@interface AWEEcomImageSearchSectionController : IGListSectionController <IGListSupplementaryViewSource>

@property (retain, nonatomic) AWEEcomImageSearchSectionDataStore *sectionDataStore;
@property (weak, nonatomic) id<AWEEcomImageSearchSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)didUpdateToObject:(id)a0;
- (id)supplementaryViewSource;
- (void)insertItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)modelAtIndex:(long long)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
