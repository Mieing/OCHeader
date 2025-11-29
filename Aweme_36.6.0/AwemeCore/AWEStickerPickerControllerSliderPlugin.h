@class NSString, IESEffectModel, AWEStickerPickerControllerSliderPluginCacheHelper, AWEModernStickerSliderView;
@protocol AWEStickerViewLayoutManagerProtocol, ACCStickerPickerService, ACCCameraService;

@interface AWEStickerPickerControllerSliderPlugin : NSObject <AWEModernStickerSliderViewDelegate, ACCRecordPropServiceSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (nonatomic) BOOL sliderEnabled;
@property (weak, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) AWEModernStickerSliderView *slider;
@property (retain, nonatomic) AWEStickerPickerControllerSliderPluginCacheHelper *cacheHelper;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (weak, nonatomic) id<AWEStickerViewLayoutManagerProtocol> layoutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)controller:(id)a0 willShowOnView:(id)a1;
- (void)controller:(id)a0 didSelectNewSticker:(id)a1 oldSticker:(id)a2;
- (void)onClickedBeautyButton;
- (void)onClickedFilterButton;
- (void)slider:(id)a0 valueDidChanged:(float)a1 mode:(long long)a2;
- (void)slider:(id)a0 didFinishSlidingWithValue:(float)a1 mode:(long long)a2;
- (void)showSliderWithStickerIfNeeded:(id)a0;
- (BOOL)shouldShowSliderWithEffectModel:(id)a0;
- (void)attachSliderWithEffectModel:(id)a0;
- (void)removeSlider;
- (void)sendMessageWithValue:(id)a0 mode:(id)a1;
- (void)configSliderWithEffectModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
