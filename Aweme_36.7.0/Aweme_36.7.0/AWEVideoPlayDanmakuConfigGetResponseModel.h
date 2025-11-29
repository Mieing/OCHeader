@class NSArray;

@interface AWEVideoPlayDanmakuConfigGetResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *configList;
@property (copy, nonatomic) NSArray *danmakuGuideList;

+ (id)propertyToModelClassInArrayMap;
+ (id)configListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
