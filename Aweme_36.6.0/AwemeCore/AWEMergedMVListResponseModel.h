@class NSArray, NSNumber, NSDictionary;

@interface AWEMergedMVListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *mvTemplates;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *longCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *sortedPosition;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)mvTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
