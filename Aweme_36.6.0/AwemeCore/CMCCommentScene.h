@class CMCCallable;

@interface CMCCommentScene : CMCScene

@property (retain, nonatomic) CMCCallable *didClickUser;
@property (retain, nonatomic) CMCCallable *didClickCell;
@property (retain, nonatomic) CMCCallable *didClickCommentFeedback;
@property (retain, nonatomic) CMCCallable *trackLink;
@property (retain, nonatomic) CMCCallable *makeAdComment;
@property (retain, nonatomic) CMCCallable *didClickExtraInfo;

- (void).cxx_destruct;
- (id)init;

@end
