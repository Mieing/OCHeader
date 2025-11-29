@class NSString, PayWay;

@interface HoneyPayerDetail : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardNo;
@property (retain, nonatomic) NSString *userUsername;
@property (nonatomic) unsigned long long creditLine;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *attentionMessage;
@property (nonatomic) unsigned int notifyFlag;
@property (retain, nonatomic) PayWay *payWay;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int unbindTime;
@property (nonatomic) unsigned int unbindFlag;
@property (retain, nonatomic) NSString *cardStateTitle;
@property (retain, nonatomic) NSString *cardTypeName;
@property (nonatomic) BOOL isOpenUnifiedPay;

+ (void)initialize;

@end
