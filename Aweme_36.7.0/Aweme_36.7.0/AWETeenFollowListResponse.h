@class NSArray, NSNumber;

@interface AWETeenFollowListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *subscribeList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)hasMoreJSONTransformer;
+ (id)subscribeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
