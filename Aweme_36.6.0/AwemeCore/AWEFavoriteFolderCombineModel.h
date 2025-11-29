@class AWEURLModel;

@interface AWEFavoriteFolderCombineModel : AWEBaseApiModel

@property (nonatomic) int totalFolderNumber;
@property (copy, nonatomic) AWEURLModel *collectsCover;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
