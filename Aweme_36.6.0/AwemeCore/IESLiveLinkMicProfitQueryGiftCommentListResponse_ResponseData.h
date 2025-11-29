@class NSMutableArray;

@interface IESLiveLinkMicProfitQueryGiftCommentListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *commentsArray;
@property (readonly, nonatomic) unsigned long long commentsArray_Count;
@property (nonatomic) long long total;
@property (nonatomic) BOOL showCommentDetail;

+ (id)descriptor;

@end
