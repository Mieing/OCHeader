@class QyBaseResponse, NSMutableArray, BaseResponse;

@interface BizChatSearchContactResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSMutableArray *user;
@property (nonatomic) BOOL more;

+ (void)initialize;

@end
