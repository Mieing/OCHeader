@class NSString, NSArray;

@interface AWEMusicChartLoadMoreEventModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSArray *awemeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
