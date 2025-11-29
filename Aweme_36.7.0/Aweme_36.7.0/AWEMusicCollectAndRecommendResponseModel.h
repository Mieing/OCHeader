@class NSNumber, NSArray, AWECollectDiversionModel;

@interface AWEMusicCollectAndRecommendResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSArray *mediaList;
@property (retain, nonatomic) NSArray *recommendList;
@property (readonly, nonatomic) AWECollectDiversionModel *collectDiversionModel;

+ (id)hasMoreJSONTransformer;
+ (id)recommendListJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)collectDiversionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
