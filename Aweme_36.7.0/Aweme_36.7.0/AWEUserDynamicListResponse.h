@class NSNumber, NSArray;

@interface AWEUserDynamicListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *dynamicList;

+ (id)hasMoreJSONTransformer;
+ (id)dynamicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
