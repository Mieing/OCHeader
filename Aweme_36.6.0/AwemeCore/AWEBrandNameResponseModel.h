@class NSArray;

@interface AWEBrandNameResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *brandNameList;

+ (id)brandNameListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
