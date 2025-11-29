@class NSArray;

@interface AWEHPSideBarGearUIConfig : AWEBaseBizConfigModel

@property (readonly, copy, nonatomic) NSArray *gearConfig;

+ (id)gearConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
