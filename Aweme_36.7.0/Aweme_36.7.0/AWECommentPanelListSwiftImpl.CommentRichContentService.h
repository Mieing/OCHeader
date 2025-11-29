@interface AWECommentPanelListSwiftImpl.CommentRichContentService : NSObject <AWECommentRichContentServiceProtocol>

- (id)contentViewModelForMediaFeedTitleElement:(id)a0 maxWidth:(double)a1 tapAction:(id /* block */)a2;
- (void)transferToHightLightAction:(id)a0 params:(id)a1 context:(id)a2;
- (id)makeCommentContentModelWithComment:(id)a0;
- (id)makeCommentContentConfigWithWidth:(double)a0 params:(id)a1 tapAction:(id /* block */)a2;
- (id)makeCommentContentViewModelWithModel:(id)a0 config:(id)a1 isColorWhite:(BOOL)a2 expanded:(BOOL)a3;
- (id)init;

@end
