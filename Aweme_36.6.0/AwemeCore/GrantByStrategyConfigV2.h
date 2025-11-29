@class NSString;

@interface GrantByStrategyConfigV2 : GPBMessage

@property (copy, nonatomic) NSString *grantStrategyType;
@property (nonatomic) BOOL hasGrantStrategyType;
@property (copy, nonatomic) NSString *certificate;
@property (nonatomic) BOOL hasCertificate;
@property (copy, nonatomic) NSString *sign;
@property (nonatomic) BOOL hasSign;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (copy, nonatomic) NSString *sendUniqId;
@property (nonatomic) BOOL hasSendUniqId;
@property (nonatomic) BOOL noNeedSendAward;
@property (nonatomic) BOOL hasNoNeedSendAward;

+ (id)descriptor;

@end
