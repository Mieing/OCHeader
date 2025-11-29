@class NSString;

@interface AWEEnterpriseToastInfoModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpTextColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
