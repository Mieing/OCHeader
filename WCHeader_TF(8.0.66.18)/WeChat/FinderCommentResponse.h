@class NSString, FinderCommentRelatedFeedInfo, FinderObject, NSMutableArray, BaseResponse;

@interface FinderCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) NSString *clientid;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) NSMutableArray *exposedComment;
@property (retain, nonatomic) FinderCommentRelatedFeedInfo *relatedFeedInfo;

+ (void)initialize;

@end
