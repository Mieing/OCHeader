@class AWEFavoriteFolderBaseInfoModel;

@interface AWEAwemeRelatedCollectsInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *favoriteFolderModel;

+ (id)favoriteFolderModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
