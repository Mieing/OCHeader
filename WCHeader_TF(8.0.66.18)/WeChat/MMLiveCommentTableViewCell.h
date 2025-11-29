@class MMLiveCommentDataItem, MMLiveCommentTableViewCellFrame;

@interface MMLiveCommentTableViewCell : MMTableViewCell

@property (retain, nonatomic) MMLiveCommentTableViewCellFrame *cellFrame;
@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;
@property (nonatomic) BOOL supportDisplayStatus;

- (void)prepareForDisplay;
- (void)reloadLikeInfo;
- (void)willDisplay;
- (void).cxx_destruct;

@end
