@class NSArray, NSNumber, NSDictionary;

@interface AWEFavoriteMixListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *mixList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSDictionary *logPb;

+ (id)mixListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
