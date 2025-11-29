@class NSTimer, UIView, AWETeenModePlayerProgressSlider, AWETeenPlayInteractionContext, UIImage, UIWindow, AWETeenPlayInteractionProgressHelper, UIVisualEffectView;

@interface AWETeenPlayInteractionMiniSlider : UIView

@property (weak, nonatomic) AWETeenPlayInteractionProgressHelper *progressHelper;
@property (retain, nonatomic) AWETeenModePlayerProgressSlider *progressSlider;
@property (retain, nonatomic) AWETeenModePlayerProgressSlider *fakeProgressSlider;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) AWETeenPlayInteractionContext *context;
@property (retain, nonatomic) UIView *progressSliderUnderView;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL pause;
@property (retain, nonatomic) NSTimer *sliderToNormalTimer;
@property (retain, nonatomic) UIImage *defaultThumbImage;
@property (retain, nonatomic) UIImage *middleThumbImage;
@property (retain, nonatomic) UIImage *wakeupDefaultThumbImage;
@property (retain, nonatomic) UIVisualEffectView *blurBackgroudView;
@property (retain, nonatomic) UIView *viewMask;
@property (nonatomic) BOOL isAppearing;

+ (Class)aAWEBrandColorAdapterClass;

- (id)aAWEBrandColorAdapter;
- (id)sliderThemeColor;
- (void)p_updateProgressSliderToNormal;
- (void)p_stopSliderToNormalTimer;
- (void)p_updateProgressSliderToWakeUp;
- (void)p_updateProgressSliderToMiddle;
- (void)p_startSliderToNormalTimer;
- (id)initWithProgressHelper:(id)a0 context:(id)a1;
- (void)updateSliderStatusWithPause:(BOOL)a0;
- (void)hideUnderView;
- (void).cxx_destruct;
- (void)dealloc;

@end
