@class NSArray, NSNumber, NSDictionary;

@interface AWEScreenCastInnerListMixListModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSDictionary *logPB;

+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
