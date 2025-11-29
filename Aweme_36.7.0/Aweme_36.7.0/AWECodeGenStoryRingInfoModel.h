@class NSArray;

@interface AWECodeGenStoryRingInfoModel : AWEBaseDataModel

@property (nonatomic) long long version;
@property (copy, nonatomic) NSArray *storyRingsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
