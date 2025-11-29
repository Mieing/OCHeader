@class NSArray, AWEFriendStyleLikeUserCellFrame, AWEFriendStyleCommentCountCellFrame, AWEFriendStyleAddCommentCellFrame;

@interface AWEModernFeedCommentTableViewModel : NSObject

@property (retain, nonatomic) AWEFriendStyleLikeUserCellFrame *likeUserCellFrame;
@property (retain, nonatomic) NSArray *commentCellFrameArray;
@property (retain, nonatomic) AWEFriendStyleCommentCountCellFrame *commentCountCellFrame;
@property (retain, nonatomic) AWEFriendStyleAddCommentCellFrame *addCommentCellFrame;

- (void).cxx_destruct;
- (id)init;

@end
