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

@end
