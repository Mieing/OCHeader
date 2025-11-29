@class AWELeftSideBarWalletEyeInfoDataModel;

@interface AWELeftSideBarWalletInfoDataModel : AWELeftSideBarAssetInfoDataModel

@property (retain, nonatomic) AWELeftSideBarWalletEyeInfoDataModel *assetsEyeModel;

+ (id)assetsEyeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;

@end
