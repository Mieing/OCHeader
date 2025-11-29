@class BaseRequest, NSString, BizChatMemberList;

@interface UpdateBizChatMemberListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) NSString *bizchatId;
@property (retain, nonatomic) BizChatMemberList *addMemberList;
@property (retain, nonatomic) BizChatMemberList *delMemberList;

+ (void)initialize;

@end
