@class NSArray;

@interface AFDClipPagingRequestResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (retain, nonatomic) NSArray *clips;

+ (id)clipsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
