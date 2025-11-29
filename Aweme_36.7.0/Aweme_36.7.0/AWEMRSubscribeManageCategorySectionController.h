@class AWECodeGenSubcategoryModel, NSString, DUXContentSheet;

@interface AWEMRSubscribeManageCategorySectionController : AWEBaseListSectionController <AWEMRSubscribeManageSelectionPanelDelegate, DUXSheetDelegate>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWECodeGenSubcategoryModel *sheetOfSubcategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sheetDidDismiss:(id)a0;
- (void)didBindSectionViewModel;
- (void)configSupplementaryHeaderView:(id)a0;
- (BOOL)shouldHighlightItemAtIndex:(long long)a0 model:(id)a1;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (void)updateSheetFrame:(id)a0 withPanelHeight:(double)a1;
- (void)handleSubscribeStatusChange:(id)a0 model:(id)a1;
- (void)handleTopContainerClickEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)handleOptionValueChangeEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (BOOL)needShowImageAtCellIndex:(long long)a0;
- (id)selectionPanel:(id)a0 configAtRow:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
