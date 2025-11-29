@class NSNumber, NSArray;

@interface AWEAwemeOlympicResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
