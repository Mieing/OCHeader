@interface AWEBookImpl.KnowledgeBookServiceImpl : HTSService <AWEKnowledgeBookService>

- (void)openBookDetailWithSchema:(id)a0 delegate:(id)a1;
- (void)openShareAsBookStory:(id)a0;
- (id)bookCommentController:(id)a0;
- (void)jumpURLWithParams:(id)a0 user:(id)a1;
- (void)jumpURLWithParamsForAuthor:(id)a0;
- (id)init;

@end
