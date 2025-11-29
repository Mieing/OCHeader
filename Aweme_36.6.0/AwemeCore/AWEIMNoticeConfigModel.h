@class NSString, NSArray;

@interface AWEIMNoticeConfigModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long selectValue;
@property (copy, nonatomic) NSArray *optionList;

+ (id)optionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
