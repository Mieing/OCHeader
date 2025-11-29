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

@end
