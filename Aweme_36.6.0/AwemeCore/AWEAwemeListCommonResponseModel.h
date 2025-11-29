@class NSArray, NSNumber;

@interface AWEAwemeListCommonResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *maxCursor;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
