@interface AWECommentPanelHeaderSwiftImpl.CommentPanelHeaderSectionController : AWEBaseListSectionController <AWECommentPanelHeaderSectionControllerProtocol> {
    void /* function */ didUpdateHeight;
    void /* function */ didTopBarUpdate;
    void /* unknown type, empty encoding */ maxWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellViewModel;
}

@property (nonatomic, copy) id /* block */ didUpdateHeight;
@property (nonatomic, copy) id /* block */ didTopBarUpdate;

+ (Class)sectionViewModelClass;

- (void)commentPanelDidDismiss;
- (void)commentPanelDidShow;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (double)currentHeight;
- (void).cxx_destruct;
- (id)init;
- (double)separatorHeight;
- (Class)cellClass;

@end
