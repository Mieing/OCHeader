@class NSNumber, NSArray;

@interface AWEConcernResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *updateItemCount;
@property (retain, nonatomic) NSNumber *updateRoomCount;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *cardList;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)followFeed_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
