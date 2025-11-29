@class NSArray, NSString;

@interface AWENearbyHotSpotFeedListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *hotSpotFirstAwemeList;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *hotRankVersion;
@property (nonatomic) long long itemTotalCount;

+ (id)awemeListJSONTransformer;
+ (id)hotSpotFirstAwemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
