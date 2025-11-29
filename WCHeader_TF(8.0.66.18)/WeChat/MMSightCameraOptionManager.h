@class MMSightCameraFlashlightOption, NSMutableArray, MMSightCameraGridLineOption, MMSightCameraAspectRatioOption, MMSightCameraNightModeOption, MMSightCameraBeautifyOption, MMSightCameraProModeOption, MMSightCameraTimerOption, MMSightCameraPortraitModeOption, MMSightCameraFilterOption, MMSightCameraHDROption, MMSightCameraZoomerOption;
@protocol MMSightCameraOptionControllerProtocol;

@interface MMSightCameraOptionManager : NSObject

@property (retain, nonatomic) MMSightCameraAspectRatioOption *aspectRatioOption;
@property (retain, nonatomic) MMSightCameraBeautifyOption *beautifyOption;
@property (retain, nonatomic) MMSightCameraFilterOption *filterOption;
@property (retain, nonatomic) MMSightCameraFlashlightOption *flashlightOption;
@property (retain, nonatomic) MMSightCameraGridLineOption *gridLineOption;
@property (retain, nonatomic) MMSightCameraHDROption *hdrOption;
@property (retain, nonatomic) MMSightCameraNightModeOption *nightModeOption;
@property (retain, nonatomic) MMSightCameraPortraitModeOption *portraitModeOption;
@property (retain, nonatomic) MMSightCameraProModeOption *proModeOption;
@property (retain, nonatomic) MMSightCameraTimerOption *timerOption;
@property (retain, nonatomic) MMSightCameraZoomerOption *zoomerOption;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (weak, nonatomic) id<MMSightCameraOptionControllerProtocol> optionController;
@property (retain, nonatomic) NSMutableArray *allOptionList;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 optionController:(id)a1;
- (void)updateOptionOrientation:(long long)a0;
- (void)_iniFortDefaultMode;
- (void)_initForProMode;
- (void)_initFlashlightOptionWithLegacyStyle:(BOOL)a0;
- (void)_initNightModeOption;
- (void)_initPortraitModeOption;
- (void)_initHDROption;
- (void)_initFilterOption;
- (void)_initBeautifyOption;
- (void)_initAspectRatioOption;
- (void)_initGridLineOption;
- (void)_initTimerOption;
- (void)_initZoomerOption;
- (void)_initProModeOption;
- (void).cxx_destruct;

@end
