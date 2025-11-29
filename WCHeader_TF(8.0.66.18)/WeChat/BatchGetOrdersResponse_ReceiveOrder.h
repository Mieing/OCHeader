@class NSString;

@interface BatchGetOrdersResponse_ReceiveOrder : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *senderUsername;
@property (retain, nonatomic) NSString *receiverUsername;
@property (nonatomic) long long amount;
@property (nonatomic) long long receiveTime;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
