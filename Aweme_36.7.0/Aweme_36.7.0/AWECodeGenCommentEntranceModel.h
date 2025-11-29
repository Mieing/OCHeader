@class NSString, NSArray;

@interface AWECodeGenCommentEntranceModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *displayRuleModelArray;
@property (nonatomic) long long showDuration;
@property (nonatomic) long long textStay;
@property (nonatomic) long long replaceTag;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
