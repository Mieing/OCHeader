@class NSArray;

@interface AWETeenHotSpotListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *hotSpotList;

+ (id)hotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
