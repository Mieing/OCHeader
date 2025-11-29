@class NSMutableArray, BaseResponse;

@interface AppMsgCommentListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *comment;
@property (nonatomic) BOOL onlyFansCanComment;
@property (nonatomic) unsigned int isFans;
@property (nonatomic) unsigned int enabled;
@property (nonatomic) int nextOffset;

+ (void)initialize;

@end
