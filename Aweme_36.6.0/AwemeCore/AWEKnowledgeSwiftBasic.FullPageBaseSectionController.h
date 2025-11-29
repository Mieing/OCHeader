@interface AWEKnowledgeSwiftBasic.FullPageBaseSectionController : AWEBaseListSectionController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_itemManager;
}

+ (Class)sectionViewModelClass;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)handleThemeChangeNotification;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
