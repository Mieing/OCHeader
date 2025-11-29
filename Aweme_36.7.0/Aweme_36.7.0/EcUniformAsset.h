@class EcTagRelationModel, EcLocalAssetModel, EcCloudAssetModel;

@interface EcUniformAsset : NSObject

@property (retain, nonatomic) EcTagRelationModel *tagRelation;
@property (retain, nonatomic) EcLocalAssetModel *localAsset;
@property (retain, nonatomic) EcCloudAssetModel *cloudAsset;

- (void).cxx_destruct;

@end
