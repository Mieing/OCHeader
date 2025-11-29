@class QyBaseResponse, NSMutableArray, BaseResponse;

@interface GetBizChatUserInfoListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSMutableArray *user;

+ (void)initialize;

@end
