@interface AWEKnowledgeSwiftImpl.HangoutWaterfallCommonLynxSectionController : AWEBaseListSectionController <AWEHangoutNiceWaterfallSectionProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellHeight;
    void /* unknown type, empty encoding */ markShow;
    void /* unknown type, empty encoding */ markAppear;
    void /* unknown type, empty encoding */ markPinTopCardShow;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)sectionWillEnterWorkingRange;
- (long long)waterfallColumnCount;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
