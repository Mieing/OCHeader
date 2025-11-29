@class NSArray;

@interface AWEIMPolymerizationDiggResponseModel : AWEBaseApiModel

@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (retain, nonatomic) NSArray *diggList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;

+ (id)diggListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
