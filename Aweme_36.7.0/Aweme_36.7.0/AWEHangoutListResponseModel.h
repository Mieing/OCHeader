@class NSArray, AWEHangoutHeaderModel, NSNumber;

@interface AWEHangoutListResponseModel : AWEBaseApiModel <AWEDCFeedListResponseProtocol>

@property (nonatomic, copy) NSArray *dcFeedListModelArray;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEHangoutHeaderModel *header;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cacheValidTime;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsOuter:(BOOL)a0;
- (void)setResponseTimestampToNow;
- (void)setResponseTimestampToTimeInterval:(double)a0;
- (id)initWithJsonObj:(id)a0;
- (void)assignPropWithJsonObj:(id)a0;
- (id)getArrayPropWithJsonObj:(id)a0 cls:(Class)a1 nameStr:(id)a2;
- (void).cxx_destruct;
- (void)setDataSourceType:(unsigned long long)a0;

@end
