@class NSString, NSArray;

@interface AWECodeGenCategoryVideoPreviewModel : AWEBaseDataModel

@property (nonatomic) long long categoryId;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *videosModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
