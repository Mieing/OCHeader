@interface AWEBookImpl.BookDetailPageVideoSectionController : AWEBaseListSectionController <AWEHangoutNiceWaterfallSectionProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colorTheme;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionWillEnterWorkingRange;
- (void)sectionWillStayInScreen:(long long)a0;
- (long long)waterfallColumnCount;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)init;
- (Class)cellClass;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
