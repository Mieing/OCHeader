@class QyBaseResponse, NSString, BizChatUser, FullBizChat, BaseResponse;

@interface ConvertBizChatResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSString *brandUserName;
@property (nonatomic) unsigned int bizchatType;
@property (retain, nonatomic) FullBizChat *groupChat;
@property (retain, nonatomic) BizChatUser *singleChat;

+ (void)initialize;

@end
