@class QyBaseResponse, NSString, BizChatUser, FullBizChat, BaseResponse;

@interface InitiateBizChatResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSString *brandUserName;
@property (nonatomic) unsigned int bizchatType;
@property (retain, nonatomic) FullBizChat *groupChat;
@property (retain, nonatomic) BizChatUser *singleChat;
@property (retain, nonatomic) NSString *qychatType;
@property (retain, nonatomic) NSString *qychatId;

+ (void)initialize;

@end
