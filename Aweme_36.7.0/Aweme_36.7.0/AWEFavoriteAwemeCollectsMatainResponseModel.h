@class AWEFavoriteFolderBaseInfoModel, NSNumber, NSString;

@interface AWEFavoriteAwemeCollectsMatainResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *collectsInfoData;
@property (retain, nonatomic) NSNumber *favoriteStatusCode;
@property (retain, nonatomic) NSString *favoriteStatusMsg;
@property (retain, nonatomic) NSString *logid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
