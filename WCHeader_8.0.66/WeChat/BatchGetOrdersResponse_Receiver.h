@class NSString;

@interface BatchGetOrdersResponse_Receiver : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *receiverUsername;
@property (nonatomic) long long amount;
@property (nonatomic) long long receiveTime;

+ (void)initialize;

@end
