@class NSArray, NSNumber, NSString;

@interface AWETeenHotSpotFeedResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *hotSpotList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *version;

+ (id)awemeListJSONTransformer;
+ (id)hotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
