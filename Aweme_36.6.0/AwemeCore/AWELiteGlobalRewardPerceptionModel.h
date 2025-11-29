@class NSString, AWELiteGlobalRewardBanner;

@interface AWELiteGlobalRewardPerceptionModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *goldText;
@property (nonatomic) long long goldAmount;
@property (copy, nonatomic) NSString *cashText;
@property (nonatomic) long long cashAmount;
@property (retain, nonatomic) AWELiteGlobalRewardBanner *banner;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
