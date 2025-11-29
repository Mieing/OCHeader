@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface GetContactRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int userCount;
@property (retain, nonatomic) NSMutableArray *userNameList;
@property (nonatomic) unsigned int antispamTicketCount;
@property (retain, nonatomic) NSMutableArray *antispamTicket;
@property (nonatomic) unsigned int fromChatRoomCount;
@property (retain, nonatomic) NSMutableArray *fromChatRoom;
@property (nonatomic) unsigned int getContactScene;
@property (retain, nonatomic) SKBuiltinString_t *chatRoomAccessVerifyTicket;

+ (void)initialize;

- (void)setChatRoomAccessVerifyTicket:(id)a0;
- (id)chatRoomAccessVerifyTicket;
- (void)setGetContactScene:(unsigned int)a0;
- (unsigned int)getContactScene;
- (void)setFromChatRoom:(id)a0;
- (id)fromChatRoom;
- (void)setFromChatRoomCount:(unsigned int)a0;
- (unsigned int)fromChatRoomCount;
- (void)setAntispamTicket:(id)a0;
- (id)antispamTicket;
- (void)setAntispamTicketCount:(unsigned int)a0;
- (unsigned int)antispamTicketCount;
- (void)setUserNameList:(id)a0;
- (id)userNameList;
- (void)setUserCount:(unsigned int)a0;
- (unsigned int)userCount;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
