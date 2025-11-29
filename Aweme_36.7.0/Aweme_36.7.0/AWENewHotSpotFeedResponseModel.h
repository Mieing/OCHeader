@class NSArray, NSNumber;

@interface AWENewHotSpotFeedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL hasMore;

+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
