@interface AWECommentPanelListSwiftImpl.CommentPanelListCellService : NSObject <AWECommentPanelListCellServiceProtocol>

- (id)cellViewModelMap:(id)a0;
- (id)newCommentFeedCellInstance;
- (id)preloadCellComponentForFirstFrame;
- (Class)newCommentFeedCellClass;
- (id)newCommentFeedCellClassIdentifier;
- (id)generateCommentNewFeedCellViewModelWithComment:(id)a0 maxWidth:(double)a1 scene:(long long)a2;
- (id)init;

@end
