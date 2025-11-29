@class NSString, UILabel, RTVSlider, UIView;
@protocol RTVStorageArea, RxInjector, RTVXRControllerInjector, RTVFeedConfigureManagerInterface, RTVInteractionVolumeSettingViewControllerDelegate;

@interface RTVInteractionVolumeSettingViewController : UIViewController <RTVFeedSliderDelegate, RTVPageSheetViewControllerProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) UIView *headView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIView *lineView;
@property (readonly, nonatomic) RTVSlider *videoSlider;
@property (readonly, nonatomic) RTVSlider *voiceSlider;
@property (readonly, nonatomic) UILabel *videoLabel;
@property (readonly, nonatomic) UILabel *voiceLabel;
@property (readonly, nonatomic) UIView *sliderBackView;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (readonly, weak, nonatomic) id<RTVFeedConfigureManagerInterface> feedConfigureManager;
@property (nonatomic) BOOL hasAdjust;
@property (nonatomic) double lastInteractionVolume;
@property (nonatomic) double lastVoiceVolume;
@property (copy, nonatomic) NSString *interactionVolumeTitle;
@property (weak, nonatomic) id<RTVInteractionVolumeSettingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (BOOL)disablePreferredContentSizeBelongToAutoLayout;
- (void)slider:(id)a0 valueDidChanged:(float)a1;
- (void)slider:(id)a0 didFinishSlidingWithValue:(float)a1;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (BOOL)enablePullDismissGestureForPageSheetPresentation;
- (id)currentVoiceVolume;
- (void)showVolumeAdjustmentPanelOnViewController:(id)a0;
- (void)configInteractionVolumeTitle:(id)a0;
- (id)currentInteractionVolume;
- (void)refreshVolumePanel;
- (void)__createHeader;
- (void)__createSliders;
- (void)__slider:(id)a0 didUpdateSlidingWithValue:(float)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;

@end
