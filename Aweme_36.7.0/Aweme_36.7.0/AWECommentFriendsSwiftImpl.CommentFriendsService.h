@interface AWECommentFriendsSwiftImpl.CommentFriendsService : NSObject <AWECommentFriendsService>

- (void)showCommentPermissionActionSheet:(id)a0 method:(id)a1;
- (id)richContentContainerViewController:(id)a0;
- (id)feedFastSpeedView;
- (BOOL)enableInputAutoSearchStickerWithAweme:(id)a0;
- (void)clearCommentInputSceneNotClickCount;
- (BOOL)enableCommentInputSearchSticker;
- (void)addCommentInputSceneNotClickCount;
- (BOOL)canCommentWithAweme:(id)a0 timeInterval:(double)a1;
- (BOOL)isInPureModePage;
- (void)triggerCommentEventWithEnterFrom:(id)a0 previousPage:(id)a1 rootPage:(id)a2 itemId:(id)a3 commentId:(id)a4 authorId:(id)a5;
- (id)longPressIconOverlay;
- (id)init;

@end
