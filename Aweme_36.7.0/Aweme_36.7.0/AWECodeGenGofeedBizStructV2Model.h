@class NSString, NSArray;

@interface AWECodeGenGofeedBizStructV2Model : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemRecallSource;
@property (copy, nonatomic) NSArray *mediumBannerListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
