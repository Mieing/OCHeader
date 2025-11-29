@class NSArray;

@interface AWEIPHotSpotResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *hotSpotList;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;

+ (id)hotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
