@class NSNumber, NSArray;

@interface AWECoCreatorResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
