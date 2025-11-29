@class NSString;

@interface AWECodeGenGrantByStrategyConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *grantStrategyType;
@property (copy, nonatomic) NSString *certificate;
@property (copy, nonatomic) NSString *sign;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *sendUniqId;
@property (nonatomic) BOOL noNeedSendAward;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
