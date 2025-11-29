@class NSArray, NSString, AWEWebcastCodeGenImageContentModel;

@interface AWEWebcastCodeGenImageModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *urlArray;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (copy, nonatomic) NSString *avgColor;
@property (nonatomic) int imageType;
@property (copy, nonatomic) NSString *openWebUrl;
@property (retain, nonatomic) AWEWebcastCodeGenImageContentModel *contentModel;
@property (nonatomic) BOOL isAnimated;
@property (copy, nonatomic) NSArray *flexSettingListModelArray;
@property (copy, nonatomic) NSArray *textSettingListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
