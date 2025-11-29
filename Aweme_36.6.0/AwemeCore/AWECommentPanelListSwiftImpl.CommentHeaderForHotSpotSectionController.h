@interface AWECommentPanelListSwiftImpl.CommentHeaderForHotSpotSectionController : AWEBaseListSectionController {
    void /* unknown type, empty encoding */ cellHeight;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ commentContentVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellWidth;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;
- (Class)footerViewClass;

@end
