@class AUCDTOFeatureToolBar, AUCDTOFeatureCameraSpeed, AUCDTOFeatureCameraCountDown, AUCDTOFeatureCameraBeauty, AUCDTOFeatureCameraSettings, AUCDTOFeatureCameraMusic, AUCDTOFeatureCameraEffect, AUCDTOFeatureCameraAlbum, AUCDTOFeatureCameraFilter;

@interface AUCDTOFeatureCamera : MTLModel

@property (retain, nonatomic) AUCDTOFeatureCameraBeauty *beauty;
@property (retain, nonatomic) AUCDTOFeatureCameraCountDown *countDown;
@property (retain, nonatomic) AUCDTOFeatureCameraMusic *music;
@property (retain, nonatomic) AUCDTOFeatureCameraFilter *filter;
@property (retain, nonatomic) AUCDTOFeatureCameraEffect *effect;
@property (retain, nonatomic) AUCDTOFeatureCameraSpeed *speed;
@property (retain, nonatomic) AUCDTOFeatureCameraSettings *settings;
@property (retain, nonatomic) AUCDTOFeatureCameraAlbum *album;
@property (retain, nonatomic) AUCDTOFeatureToolBar *toolBar;

- (void).cxx_destruct;

@end
