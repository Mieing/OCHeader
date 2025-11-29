@class NSString;

@interface HoneyUserDetail : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardNo;
@property (retain, nonatomic) NSString *payerUsername;
@property (nonatomic) unsigned long long remainCreditLine;
@property (nonatomic) int state;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int unbindTime;
@property (nonatomic) unsigned int unbindFlag;
@property (retain, nonatomic) NSString *cardStateTitle;
@property (retain, nonatomic) NSString *cardTypeName;
@property (retain, nonatomic) NSString *wishing;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *explain;
@property (retain, nonatomic) NSString *attentionMessage;
@property (nonatomic) unsigned int cardType;

+ (void)initialize;

@end
