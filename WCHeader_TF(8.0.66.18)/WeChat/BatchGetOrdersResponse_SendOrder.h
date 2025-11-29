@class NSString, NSMutableArray;

@interface BatchGetOrdersResponse_SendOrder : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *senderUsername;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *receivers;

+ (void)initialize;

@end
