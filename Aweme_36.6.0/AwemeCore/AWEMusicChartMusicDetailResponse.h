@class NSString, AWEMusicChartDetailModel;

@interface AWEMusicChartMusicDetailResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *startCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEMusicChartDetailModel *chartDetail;

+ (id)hasMoreJSONTransformer;
+ (id)chartDetailListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
