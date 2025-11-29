@class UIView, AWEBeautyPanelView, AWEBeautyVCContext, NSString, AWEBeautyNavigationController, UIButton, AWEBeautySlider, AWEBeautyContentItemViewController;
@protocol AWEBeautyViewControllerDelegation;

@interface AWEBeautyViewController : UIViewController <AWEBeautySliderDelegate, AWERecordBeautyDataManagerSubscriberProtocol, AWERecordBeautyVCContextDelegation>

@property (retain, nonatomic) AWEBeautyVCContext *context;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *sliderContainerView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) AWEBeautyPanelView *panelView;
@property (retain, nonatomic) AWEBeautyNavigationController *navController;
@property (weak, nonatomic) id<AWEBeautyViewControllerDelegation> delegate;
@property (retain, nonatomic) AWEBeautySlider *slider;
@property (retain, nonatomic) AWEBeautyContentItemViewController *itemVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateSourceData;
- (void)showOnView:(id)a0 animated:(BOOL)a1;
- (void)p_setupAccessibility;
- (void)showAlertWithTitle:(id)a0 content:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (void)hideSlider;
- (void)showSliderForNode:(id)a0;
- (void)p_setupNav;
- (void)p_assignAndUpdateCurrentVC;
- (void)p_updateFrames;
- (void)p_didTapBackButton;
- (void)removeFromSuperView:(BOOL)a0 completion:(id /* block */)a1;
- (void)aweEditBeautyEffectSlider:(id)a0 valueDidChange:(long long)a1 realValue:(long long)a2;
- (void)aweEditBeautyEffectSlider:(id)a0 didFinishSlidingWithValue:(long long)a1 realValue:(long long)a2;
- (void)aweEditBeautyEffectSlider:(id)a0 isSliding:(BOOL)a1;
- (void)aweEditBeautyDidStartSlidingByEffectSlider:(id)a0;
- (BOOL)isEditSceneStatus;
- (BOOL)isRecordSceneStatus;
- (void)showToast:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
