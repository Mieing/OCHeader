@class NSString;

@interface AWEIMRecommendTaskCardDetailIconModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *attributeTitle;
@property (copy, nonatomic) NSString *attributeValue;
@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) long long missionSource;
@property (retain, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
