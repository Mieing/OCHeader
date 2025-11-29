@class NSString, NSArray;

@interface ACCMusicChartListResponse : ACCBaseApiModel

@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSArray *chartList;

+ (id)hasMoreJSONTransformer;
+ (id)chartListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
