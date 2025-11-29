@class NSString;

@interface AWESearchGlobalCartModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *cartListSchema;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *backGroundColor;
@property (copy, nonatomic) NSString *strokeColor;
@property (copy, nonatomic) NSString *addSuccessTextColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
