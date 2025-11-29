@class NSString, IESLiveOpenPlatformExplainShareScreenIntroPanel, IESLiveOpenPlatformShareScreenModel;
@protocol IESLiveCommonCastScreenBusinessDelegate;

@interface IESLiveOpenPlatformShareScreenBaseStrategy : NSObject <IESLiveOpenPlatformShareScreenStrategy, IESLiveCommonCastScreenBusiness, IESLiveNativeAppShareScreenReaction, IESLiveGameOpenPlatformAppInstanceLifeCycleObserver>

@property (retain, nonatomic) IESLiveOpenPlatformExplainShareScreenIntroPanel *guidePanel;
@property (copy, nonatomic) id /* block */ startCallback;
@property (copy, nonatomic) id /* block */ stopCallback;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long strategy;
@property (readonly, nonatomic) long long containerType;
@property (retain, nonatomic) IESLiveOpenPlatformShareScreenModel *model;
@property (nonatomic) long long currentUIStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveCommonCastScreenBusinessDelegate> castDelegate;

- (long long)screenCastType;
- (id)castScreenIcon;
- (long long)castScreenStrategy;
- (void)setupGuidePanel:(id)a0;
- (BOOL)setupCloseAlertShouldShow;
- (id)castScreenIdentifier;
- (id)castScreenSuccessToast;
- (void)changeScreenCastUIStatus:(long long)a0;
- (void)forceStopCastScreenWithRunnerResponse:(id)a0 continueBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamVideoInputRatio;
- (id)castBackgroundImage;
- (id)castBackgroundImageURL;
- (BOOL)shouldDisableInteractionItem;
- (id)castScreenMinimizeToast;
- (id)castScreenComponentView;
- (id)castBusinessIconURL;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)sendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)appID:(id)a0 didChangeRunningStatus:(long long)a1 extra:(id)a2;
- (id)initWithAppId:(id)a0 strategy:(unsigned long long)a1 containerType:(long long)a2 model:(id)a3 diContext:(id)a4;
- (void)openShareScreenGuidePanelWithCancelCallback:(id /* block */)a0 confirmCallback:(id /* block */)a1;
- (void)clickStartShareScreenWithCallback:(id /* block */)a0;
- (void)clickStopShareScreenWithCallback:(id /* block */)a0;
- (void)trueStartShareScreenWithExtraInfo:(id)a0;
- (void)trueStopShareScreenWithExtraInfo:(id)a0;
- (void)failStartShareScreenWithError:(id)a0;
- (void)failStopShareScreenWithError:(id)a0;
- (id)appID;
- (void).cxx_destruct;
- (long long)businessType;
- (BOOL)isEqual:(id)a0;

@end
