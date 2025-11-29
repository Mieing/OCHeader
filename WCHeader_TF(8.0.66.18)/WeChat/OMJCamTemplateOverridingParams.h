@class OMJCamFilterDesc, NSDictionary, OMJCamMusicDesc, OMJBeautyAdjustmentDesc;

@interface OMJCamTemplateOverridingParams : NSObject

@property (retain, nonatomic) OMJBeautyAdjustmentDesc *beautyDesc;
@property (retain, nonatomic) OMJCamFilterDesc *filterDesc;
@property (retain, nonatomic) OMJCamMusicDesc *musicDesc;
@property (retain, nonatomic) NSDictionary *assetInfosByKey;

- (void).cxx_destruct;

@end
