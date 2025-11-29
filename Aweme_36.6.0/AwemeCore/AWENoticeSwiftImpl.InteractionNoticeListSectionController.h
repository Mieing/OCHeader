@interface AWENoticeSwiftImpl.InteractionNoticeListSectionController : AWEBaseListSectionController {
    void /* unknown type, empty encoding */ eventDelegate;
    void /* unknown type, empty encoding */ currentEditingCell;
    void /* unknown type, empty encoding */ $__lazy_storage_$_unfoldView;
}

+ (BOOL)enableCellControllerDispatch;

- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didCreateCellController:(id)a0 cellViewModel:(id)a1;
- (void)configSupplementaryFooterView:(id)a0;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (Class)footerViewClass;

@end
