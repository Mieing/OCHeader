@class MPCommentReply;

@interface MPCommentReplyCellViewModel : MPCommentBaseCellViewModel

@property (retain, nonatomic) MPCommentReply *commentReply;
@property (readonly, nonatomic) BOOL isFromAuthor;
@property (readonly, nonatomic) BOOL isDelete;
@property (nonatomic) BOOL isPreReplyFromSameAuthor;

- (id)initWithMPCommentMsgAndReply:(id)a0 commentReply:(id)a1;
- (id)cellViewClassName;
- (id)creatCommentCellView;
- (double)headerMargin;
- (id)content;
- (void)markReplyDeleted;
- (BOOL)isLike;
- (BOOL)isSelected;
- (unsigned int)likeCount;
- (void)switchThumbsUpStatus;
- (void).cxx_destruct;

@end
