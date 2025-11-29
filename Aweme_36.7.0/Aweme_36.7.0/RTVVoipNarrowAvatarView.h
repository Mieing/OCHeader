@class RTVVoipNarrowAvatarViewContext, UILabel, RTVVoipNarrowSingleAvatarView, UIView;
@protocol RTVUserProfileManagerInterface, RTVSessionPreviewProcotol, RTVColorAdaptorInterface, RTVXRControllerInjector;

@interface RTVVoipNarrowAvatarView : UIView

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) RTVVoipNarrowSingleAvatarView *firstAvatarView;
@property (retain, nonatomic) RTVVoipNarrowSingleAvatarView *secondAvatarView;
@property (retain, nonatomic) UIView *avatarCallingIndicator;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UILabel *textView;
@property (readonly, nonatomic) UIView *audioVolumeIndicator;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) RTVVoipNarrowAvatarViewContext *context;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVColorAdaptorInterface> colorAdaptor;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__refreshComponents;
- (void)stopCallingAnimation;
- (void)__refreshAnimationState;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshLayout;

@end
