@class NSString, NSArray;

@interface IESIMCodeGenEntryLimitExtModel : AWEBaseDataModel

@property (nonatomic) long long entryType;
@property (copy, nonatomic) NSString *entryDetail;
@property (copy, nonatomic) NSArray *entryDetailTemplateModelArray;
@property (copy, nonatomic) NSString *entryButtonText;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
