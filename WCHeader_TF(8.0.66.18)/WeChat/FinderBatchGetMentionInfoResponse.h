@class FinderMentionList, BaseResponse;

@interface FinderBatchGetMentionInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderMentionList *list;

+ (void)initialize;

@end
