@class AWESearchArticleCommentStatusCell, AWEBinding, AWESearchArticleDetailPageContext;

@interface AWESearchArticleCommentStatusSectionController : AWEBaseListSectionController

@property (weak, nonatomic) AWEBinding *binding;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (weak, nonatomic) AWESearchArticleCommentStatusCell *commentCell;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (id)formatedNumber:(long long)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)bindPageContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateTitle:(long long)a0;

@end
