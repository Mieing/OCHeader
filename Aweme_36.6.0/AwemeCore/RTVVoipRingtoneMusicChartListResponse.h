@class NSString, NSArray;

@interface RTVVoipRingtoneMusicChartListResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSArray *chartList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hasMoreJSONTransformer;
+ (id)chartListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
