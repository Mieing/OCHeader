@class NSArray, NSNumber;

@interface AFDFavoriteFolderListModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *favoriteFolderList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)favoriteFolderListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
