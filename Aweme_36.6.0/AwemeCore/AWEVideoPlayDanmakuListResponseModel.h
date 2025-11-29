@class NSArray;

@interface AWEVideoPlayDanmakuListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *danmakuList;
@property (nonatomic) long long offset;
@property (nonatomic) long long count;
@property (nonatomic) long long hasMore;

+ (id)danmakuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
