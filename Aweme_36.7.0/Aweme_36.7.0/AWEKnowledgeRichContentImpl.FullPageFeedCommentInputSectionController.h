@interface AWEKnowledgeRichContentImpl.FullPageFeedCommentInputSectionController : AWEBaseListSectionController <AWEUserMessage> {
    void /* unknown type, empty encoding */ commentInputView;
    void /* unknown type, empty encoding */ pageContext;
}

- (void)didFinishLoginWithUid:(id)a0;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
