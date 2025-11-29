@class NSString;

@interface AWELuckyCatToastModel : AWEBaseApiModel

@property (nonatomic) BOOL isDouyin;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *iconImageUrl;
@property (nonatomic) long long number;
@property (nonatomic) long long experience;
@property (copy, nonatomic) NSString *numberSuffix;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
