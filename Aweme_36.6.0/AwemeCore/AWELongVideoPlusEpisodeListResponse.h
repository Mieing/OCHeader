@class NSArray, NSNumber, NSString;

@interface AWELongVideoPlusEpisodeListResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *episodeList;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)episodeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
