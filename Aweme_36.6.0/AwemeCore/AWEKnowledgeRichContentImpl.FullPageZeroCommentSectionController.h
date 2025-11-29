@interface AWEKnowledgeRichContentImpl.FullPageZeroCommentSectionController : AWEBaseListSectionController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellHeight;
    void /* unknown type, empty encoding */ hasTrackedZeroCommentPanelViewShow;
    void /* unknown type, empty encoding */ commentInputView;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ dataContext;
    void /* unknown type, empty encoding */ shouldResponseClickEvent;
    void /* unknown type, empty encoding */ clickHandler;
    void /* unknown type, empty encoding */ commentString;
}

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)clickAlbumIcon;
- (void)clickAtIcon;
- (void)clickEmojiIcon;
- (long long)waterfallColumnCount;
- (void)enterProfile;
- (void)clickCommentInputView;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)headerViewClass;

@end
