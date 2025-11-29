@class NSArray, AWECodeGenUrlModel;

@interface AWECodeGenPosterInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *mainPosterModel;
@property (copy, nonatomic) NSArray *allPostersModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
