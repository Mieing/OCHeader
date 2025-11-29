@class NSString, NSArray;

@interface AWEMusicChartListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSArray *musicList;

+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
