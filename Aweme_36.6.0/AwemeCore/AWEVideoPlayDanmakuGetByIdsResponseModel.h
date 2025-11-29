@class NSArray;

@interface AWEVideoPlayDanmakuGetByIdsResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *danmakuList;

+ (id)danmakuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
