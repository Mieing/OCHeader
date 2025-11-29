@class NSNumber, NSArray;

@interface AWEConcernResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *updateItemCount;
@property (retain, nonatomic) NSNumber *updateRoomCount;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *fetchRecommend;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *cardList;
@property (retain, nonatomic) NSNumber *showUploadContactNotice;
@property (retain, nonatomic) NSNumber *isRecommed;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)followFeed_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
