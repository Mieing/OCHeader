@class QyBaseResponse, NSMutableArray, BaseResponse;

@interface GetFavBizChatListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSMutableArray *bizchatIdItem;

+ (void)initialize;

@end
