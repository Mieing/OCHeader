@class AWEFavoriteFolderBaseInfoModel;

@interface AWEFavoriteAndFavoriteFolderCombineResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL isCollectSuccess;
@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *folderInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
