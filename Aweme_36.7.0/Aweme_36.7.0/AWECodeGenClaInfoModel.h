@class NSArray, AWECodeGenOriginalLanguageInfoModel;

@interface AWECodeGenClaInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *listModelArray;
@property (retain, nonatomic) AWECodeGenOriginalLanguageInfoModel *originalLanguageInfoModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
