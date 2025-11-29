@class UIStackView, NSDictionary, UIView, UIButton;
@protocol RTVVoipPublisherBeautyResourceServiceInterface, RTVVoipPrepareControlViewDelegate, RxInjector, RTVVoipControlViewLayoutInterface;

@interface RTVVoipPrepareControlView : UIView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipPublisherBeautyResourceServiceInterface> beautyResourceService;
@property (readonly, nonatomic) id<RTVVoipControlViewLayoutInterface> controlViewLayout;
@property (readonly, nonatomic) UIView *topMaskView;
@property (readonly, nonatomic) UIView *bottomMaskView;
@property (readonly, nonatomic) UIView *propPanelContainerView;
@property (readonly, nonatomic) UIStackView *beautyToolStackView;
@property (readonly, nonatomic) NSDictionary *toolButtons;
@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIView *voipEntranceListView;
@property (weak, nonatomic) id<RTVVoipPrepareControlViewDelegate> delegate;

- (void)rxAwakeFromPropertyInjection;
- (void)createComponents;
- (void)__closeButtonClicked:(id)a0;
- (void)__createCloseButton;
- (id)__toolButtonWithType:(long long)a0;
- (void)__createMaskView;
- (void)__createPropPanelContainerView;
- (id)__createToolButtonWithType:(long long)a0;
- (void)__toolButtonClicked:(id)a0;
- (void)__setupMaskViewLayout;
- (void)__triggerActionWithType:(long long)a0;
- (void)propPanelBuilder:(id /* block */)a0;
- (void)configureComponents;
- (void)__createBeautyToolRegion;
- (void)__createVoipEntranceListView;
- (void)__configureBeautyRegion;
- (void)notifyShow;
- (void)beautyToolButtonClicked:(id)a0;
- (void)beautyEnhanceButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)layoutComponents;

@end
