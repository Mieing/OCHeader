@class NSString;
@protocol HTSLiveStreamPictureExtensionTranslateAction, HTSLiveStreamPictureExtensionDelegate;

@interface HTSLiveStreamPictureExtensionImpl : NSObject <HTSLiveMessageSubscriber, HTSLiveStreamPictureExtensionProvider>

@property (nonatomic) double mediaContainerOriginalTop;
@property (nonatomic) double mediaContainerAnimationTop;
@property (nonatomic) long long currentPanelHash;
@property (nonatomic) double currentSuitableTopOffset;
@property (nonatomic) long long adaptionType;
@property (nonatomic) double adaptionHeightRatio;
@property (nonatomic) double adaptationBodyCenterRatio;
@property (nonatomic) double adaptationContentTopRatio;
@property (nonatomic) double adaptationContentBottomRatio;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } mediaContainerOriginTransform;
@property (retain, nonatomic) id<HTSLiveStreamPictureExtensionTranslateAction> streamTranslateAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HTSLiveStreamPictureExtensionDelegate> delegate;

- (id)trackContext;
- (void)didSetAttachingDIContext;
- (void)beginMediaContainerTranslateWithAnimateDuration:(double)a0 panelHeight:(double)a1 panelHash:(long long)a2 scene:(id)a3;
- (void)endMediaContainerTranslateWithAnimateDuration:(double)a0 panelHash:(long long)a1 scene:(id)a2;
- (void)playerTranslateByPanelAnimationWithType:(unsigned long long)a0 panelContainerView:(id)a1 duration:(double)a2 preferenceInfo:(id)a3;
- (void)playerMoveByPanGesture:(double)a0 relativePanelHeight:(double)a1;
- (void)playerMoveByPanGesture:(double)a0 relativePanelHeight:(double)a1 panelHash:(unsigned long long)a2 scene:(id)a3;
- (void)playerMoveCompleteByPanGesture:(BOOL)a0 panelHash:(unsigned long long)a1 scene:(id)a2;
- (void)resetMediaContainerFrameAfterDelay:(double)a0 animateInterval:(double)a1;
- (void)loadEnvironmentWhenLiveComponentLoaded;
- (BOOL)isFrameValid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)liveGameOpenPanelContentAdapterEnable;
- (double)safeAreaTopOffsetPercent;
- (id)liveGameBlockSceneList;
- (id)liveGameSupportSceneList;
- (BOOL)p_shouldBlockTranslateByScene:(id)a0;
- (BOOL)enablePlayerTranslateWithPanelScene:(id)a0;
- (BOOL)allowTranslateWithType:(unsigned long long)a0 panelHash:(unsigned long long)a1 scene:(id)a2;
- (void)playerWillTranslateBeforePanelAnimationWithType:(unsigned long long)a0 panelHash:(unsigned long long)a1 scene:(id)a2;
- (void)playerTranslatingDuringPanelAnimationWithType:(unsigned long long)a0 panelHeight:(double)a1 scene:(id)a2;
- (void)trackBeginTranslateWithScene:(id)a0 strategyType:(long long)a1 moveDistance:(double)a2;
- (BOOL)isMediaContainerFrameValid;
- (void)gamePlayerWillTranslateBeforePanelAnimationWithType:(unsigned long long)a0 panelHash:(unsigned long long)a1 scene:(id)a2;
- (void)gamePlayerTranslatingDuringPanelAnimationWithType:(unsigned long long)a0 panelHeight:(double)a1 scene:(id)a2;
- (double)suitablePlayerTopOffset:(double)a0;
- (BOOL)liveGameOpenPanelContentAdapterHideComponent;
- (BOOL)liveGameOpenPanelContentAdapterForLandscapeEnable;
- (double)suitableGamePlayerTopOffset:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
