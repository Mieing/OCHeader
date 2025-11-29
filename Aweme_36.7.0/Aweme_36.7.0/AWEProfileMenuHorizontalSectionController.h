@interface AWEProfileMenuHorizontalSectionController : AWEBaseListSectionController

@property (nonatomic) BOOL showEditAlias;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadBizUIAdapter;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (Class)footerViewClass;

@end
