@class NSArray, NSString;

@interface AWECodeGenShootSuggestionModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *suggestImagesModelArray;
@property (copy, nonatomic) NSArray *suggestImagesThumbModelArray;
@property (copy, nonatomic) NSString *suggestText;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
