@class NSString, NSArray;

@interface AWEIMCodeGenPetElfScreenShotInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *urlsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
