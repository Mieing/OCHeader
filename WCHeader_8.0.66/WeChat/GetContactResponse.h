@class NSMutableArray, BaseResponse;

@interface GetContactResponse : WXPBGeneratedMessage {
    int retMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int contactCount;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (retain, nonatomic) NSMutableArray *ret;
@property (retain, nonatomic) NSMutableArray *verifyUserValidTicketList;
@property (retain, nonatomic) NSMutableArray *sendMsgTicketList;

+ (void)initialize;

- (void)setSendMsgTicketList:(id)a0;
- (id)sendMsgTicketList;
- (void)setVerifyUserValidTicketList:(id)a0;
- (id)verifyUserValidTicketList;
- (void)setRet:(id)a0;
- (id)ret;
- (void)setContactList:(id)a0;
- (id)contactList;
- (void)setContactCount:(unsigned int)a0;
- (unsigned int)contactCount;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
