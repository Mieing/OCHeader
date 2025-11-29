@class NSArray, NSString;

@interface AWERelationCleanFollowingListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *cleanList;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (copy, nonatomic) NSString *hotsoonText;

+ (id)cleanListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
