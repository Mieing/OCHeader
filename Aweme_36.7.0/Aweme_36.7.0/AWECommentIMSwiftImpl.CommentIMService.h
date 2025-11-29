@interface AWECommentIMSwiftImpl.CommentIMService : NSObject <AWECommentIMService>

- (void)requestEmoticonAggregationIfNeed;
- (id)createEmoticonContainerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1 context:(id)a2;
- (void)addSticker:(id)a0 withTrackInfo:(id)a1;
- (void)getConversationInfoWithConversationID:(id)a0 completionBlock:(id /* block */)a1;
- (Class)longPressPanelSectionControllerClass;
- (id)longPressPanelSectionControllerViewModel;
- (id)isExistStickerModel:(id)a0;
- (id)emoticonDataArray:(BOOL)a0;
- (id)init;

@end
