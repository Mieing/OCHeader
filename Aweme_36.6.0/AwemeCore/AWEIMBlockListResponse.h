@class NSArray, NSNumber, NSString;

@interface AWEIMBlockListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *blockList;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;

+ (id)blockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
