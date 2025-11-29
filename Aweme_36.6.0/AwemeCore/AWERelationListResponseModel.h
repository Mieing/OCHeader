@class AWEFansListDiagoseEntranceModel, NSArray, NSString, AWEFansListMixFansCountModel, NSMutableArray;

@interface AWERelationListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *followers;
@property (retain, nonatomic) NSMutableArray *followings;
@property (retain, nonatomic) NSArray *categoryTypes;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasMoreRecommendations;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;
@property (nonatomic) long long total;
@property (nonatomic) long long mixCount;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (copy, nonatomic) NSString *storePage;
@property (retain, nonatomic) AWEFansListMixFansCountModel *mixFansCountModel;
@property (retain, nonatomic) AWEFansListDiagoseEntranceModel *entrance;

+ (id)hasMoreJSONTransformer;
+ (id)followersJSONTransformer;
+ (id)followingsJSONTransformer;
+ (id)mixFansCountModelJSONTransformer;
+ (id)entranceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
