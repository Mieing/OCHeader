@class NSString;

@interface ACCEditBeautyEffectABService : HTSService <ACCEditBeautyEffectABService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditBeautyEffectSwitchStatus;
- (BOOL)isEditBeautyEffectOnlyStyleStatus;
- (BOOL)isEditBeautyEffectHasMoreStatus;
- (BOOL)isNeedClearEffectWhenBeautyNotAvailableStatus;
- (float)detectFaceMinAreaRatio;
- (id)detectFaceMinAreaRatioToastText;
- (unsigned long long)lokiePanelABGroup;
- (BOOL)disableBeautyForLivePhotoAndVideoStatus;
- (BOOL)disableBeautyForLivePhotoStatus;
- (BOOL)enableDetectFaceMemoryOptimizationStatus;
- (BOOL)enableEditFirstRenderOptimizationStatus;
- (BOOL)enableEditEffectConvertRealValueStatus;
- (BOOL)enableEditEffectDetectFaceAIFixStatus;
- (BOOL)enableVideoPauseTimeOptimizationStatus;
- (BOOL)isEnableEnterSecondaryPageOptimizationStatus;
- (BOOL)isEnableTrackerLogStatus;
- (BOOL)enableOptUpdateFix;
- (BOOL)enableEffectOptimizationStatus;
- (id)abInfo;
- (unsigned long long)editBeautyEffectPanelStyle;

@end
