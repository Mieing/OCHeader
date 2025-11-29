@class NSString;

@interface ForeignHbDetailRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned long long receiveAmount;
@property (retain, nonatomic) NSString *receiveTime;
@property (retain, nonatomic) NSString *receiveId;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *gameTips;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *receiveAmountDesc;

+ (void)initialize;

@end
