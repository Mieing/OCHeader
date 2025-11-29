@class QyBaseResponse, NSMutableArray, BaseResponse;

@interface GetBizChatInfoListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSMutableArray *fullChatItem;

+ (void)initialize;

@end
