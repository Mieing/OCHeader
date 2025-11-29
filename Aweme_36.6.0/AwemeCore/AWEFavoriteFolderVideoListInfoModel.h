@class NSArray, NSNumber;

@interface AWEFavoriteFolderVideoListInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
