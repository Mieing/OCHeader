@class NSNumber, NSArray;

@interface AWERecommendMusicResponse : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;

+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
