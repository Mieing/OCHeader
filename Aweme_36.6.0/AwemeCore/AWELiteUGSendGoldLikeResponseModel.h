@class NSString;

@interface AWELiteUGSendGoldLikeResponseModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long balanceAmount;
@property (nonatomic) long long giftAmount;
@property (nonatomic) long long rewardAmount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
