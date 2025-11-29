@class NSString, NSArray;

@interface AWECodeGenSubcategoryModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *subcategoryId;
@property (copy, nonatomic) NSString *subcategoryName;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) BOOL unsubCanSet;
@property (nonatomic) BOOL isButtonLinkage;
@property (copy, nonatomic) NSArray *channelListModelArray;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *bizExtra;
@property (nonatomic) int appId;
@property (copy, nonatomic) NSString *subcategoryDesc;
@property (nonatomic) int actionType;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
