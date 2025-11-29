@class NSArray;

@interface AWEAdEvaluatesListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *commentList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long nextPage;

+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
