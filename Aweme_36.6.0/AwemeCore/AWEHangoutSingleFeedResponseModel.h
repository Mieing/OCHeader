@class NSArray, NSDictionary;

@interface AWEHangoutSingleFeedResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsOuter:(BOOL)a0;
- (void)setResponseTimestampToNow;
- (void)setMiniDetail:(id)a0;
- (void).cxx_destruct;
- (void)setDataSourceType:(unsigned long long)a0;

@end
