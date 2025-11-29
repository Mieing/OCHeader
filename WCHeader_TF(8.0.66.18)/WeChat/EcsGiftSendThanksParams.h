@class NSString;

@interface EcsGiftSendThanksParams : WXPBGeneratedMessage

@property (nonatomic) unsigned int from;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *giverUsername;
@property (retain, nonatomic) NSString *receiveGroupId;
@property (nonatomic) unsigned int recipientType;
@property (retain, nonatomic) NSString *giverNickName;

+ (void)initialize;

@end
