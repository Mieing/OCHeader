@class NSString;

@interface AWEIMRecommendUserModel_TagInfo : IESIMBaseApiModel

@property (copy, nonatomic) NSString *tagDesc;
@property (nonatomic) long long tagStyle;
@property (nonatomic) long long tagType;

+ (id)tagTypeJSONTransformer;
+ (id)tagStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
