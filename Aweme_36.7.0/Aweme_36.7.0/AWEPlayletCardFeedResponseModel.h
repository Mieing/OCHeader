@class NSArray;

@interface AWEPlayletCardFeedResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *cardList;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;

+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
