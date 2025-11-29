@class NSString, NSArray;

@interface IESIMCodeGenQualityReceptionStaticModel : AWEBaseDataModel

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *dataPageSchema;
@property (copy, nonatomic) NSString *benefitsPageSchema;
@property (copy, nonatomic) NSString *optimizationPageSchema;
@property (copy, nonatomic) NSArray *itemListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
