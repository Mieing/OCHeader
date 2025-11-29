@class AWEFavoriteFolderBaseInfoModel;

@interface AWEFavoriteFolderMaintainResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *baseInfoModel;

+ (id)baseInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
