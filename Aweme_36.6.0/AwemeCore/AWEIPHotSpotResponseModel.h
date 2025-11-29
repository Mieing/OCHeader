@class NSArray, NSNumber;

@interface AWEIPHotSpotResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *hotSpotList;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *curTimeStamp;

+ (id)hotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
