@interface AWECommentPanelListSwiftImpl.CommentSurveySectionController : AWEBaseListSectionController <BDXContainerLifecycleProtocol> {
    void /* unknown type, empty encoding */ lynxView;
    void /* unknown type, empty encoding */ bridgeSubscriberList;
}

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)didBindSectionViewModel;
- (long long)waterfallColumnCount;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (Class)cellClass;
- (struct AWEListKitSeparatorInsets { double x0; double x1; })separatorInsets;

@end
