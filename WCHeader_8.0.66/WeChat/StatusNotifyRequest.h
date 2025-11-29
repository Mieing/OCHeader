@class StatusNotifyFunction, BaseRequest, NSString, NSMutableArray;

@interface StatusNotifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int code;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int unreadChatListCount;
@property (retain, nonatomic) NSMutableArray *unreadChatList;
@property (retain, nonatomic) StatusNotifyFunction *function;
@property (nonatomic) unsigned int unreadFunctionCount;
@property (retain, nonatomic) NSMutableArray *unreadFunctionList;
@property (nonatomic) unsigned int hasReadChatListCount;
@property (retain, nonatomic) NSMutableArray *hasReadChatList;
@property (nonatomic) unsigned int hasReadFunctionCount;
@property (retain, nonatomic) NSMutableArray *hasReadFunctionList;

+ (void)initialize;

- (void)setHasReadFunctionList:(id)a0;
- (id)hasReadFunctionList;
- (void)setHasReadFunctionCount:(unsigned int)a0;
- (unsigned int)hasReadFunctionCount;
- (void)setHasReadChatList:(id)a0;
- (id)hasReadChatList;
- (void)setHasReadChatListCount:(unsigned int)a0;
- (unsigned int)hasReadChatListCount;
- (void)setUnreadFunctionList:(id)a0;
- (id)unreadFunctionList;
- (void)setUnreadFunctionCount:(unsigned int)a0;
- (unsigned int)unreadFunctionCount;
- (void)setFunction:(id)a0;
- (id)function;
- (void)setUnreadChatList:(id)a0;
- (id)unreadChatList;
- (void)setUnreadChatListCount:(unsigned int)a0;
- (unsigned int)unreadChatListCount;
- (void)setClientMsgId:(id)a0;
- (id)clientMsgId;
- (void)setToUserName:(id)a0;
- (id)toUserName;
- (void)setFromUserName:(id)a0;
- (id)fromUserName;
- (void)setCode:(unsigned int)a0;
- (unsigned int)code;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
