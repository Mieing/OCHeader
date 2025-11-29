@interface AWEAwemeLongPressSpeedSectionController : AWEBaseListSectionController

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ buttonClickedTrackBlock;
@property (copy, nonatomic) id /* block */ addDismissHandlerBlock;

+ (Class)sectionViewModelClass;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
