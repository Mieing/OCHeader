@class AWESearchArticleCommentInputCell, AWESearchArticleDetailPageContext;

@interface AWESearchArticleCommentInputSectionController : AWEBaseListSectionController

@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (weak, nonatomic) AWESearchArticleCommentInputCell *inputCell;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)bindPageContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBackgroundColor;

@end
