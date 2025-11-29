@class AWECodeGenFollowShootTextOnImgAssetModel, AWECodeGenFollowShotCaptionAssetModel;

@interface AWECodeGenFollowShootAssetPostDataModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenFollowShootTextOnImgAssetModel *textOnImgAssetModel;
@property (retain, nonatomic) AWECodeGenFollowShotCaptionAssetModel *captionAssetModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
