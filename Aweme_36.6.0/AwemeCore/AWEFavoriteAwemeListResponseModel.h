@class NSArray, NSNumber;

@interface AWEFavoriteAwemeListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
