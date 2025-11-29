@interface MMGroupLiveCommentTableViewModel : MMLiveCommentTableViewModel

- (id)initWithTaskId:(id)a0 boxId:(id)a1;
- (id)commentDataMgr;
- (Class)commentTableViewCellFrameClass;
- (id)createCommentPubbleViewWithCommentItem:(id)a0 taskId:(id)a1;

@end
