@class NSNumber, NSArray;

@interface AWESearchUserPostDataResponse : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemes;
@property (retain, nonatomic) NSNumber *total;
@property (nonatomic) BOOL hasLocateItem;

+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
