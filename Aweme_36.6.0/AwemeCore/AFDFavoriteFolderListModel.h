@class NSArray, NSNumber;

@interface AFDFavoriteFolderListModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *favoriteFolderList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) int totalFolderNumber;

+ (id)favoriteFolderListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
