@class NSArray;

@interface AWETeenSubscribeListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *subscribeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;

+ (id)hasMoreJSONTransformer;
+ (id)subscribeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
