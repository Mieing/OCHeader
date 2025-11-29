@class IESLiveUserEnterStore, RACDisposable, HTSLiveUserEnterConfiguration, NSString, UIView;
@protocol HTSLiveUserEnterViewProtocol, IESLivePerfSampler;

@interface IESLiveUserEnterFragment : IESLiveRoomComponent <IESLiveUserEnterReaction, IESLiveAutoRotateAction, IESLiveUserEnterRouter>

@property (retain, nonatomic) IESLiveUserEnterStore *store;
@property (retain, nonatomic) HTSLiveUserEnterConfiguration *configuration;
@property (retain, nonatomic) UIView<HTSLiveUserEnterViewProtocol> *userEnterView;
@property (retain, nonatomic) RACDisposable *disposable;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)remoteRoomDataReady:(id)a0;
- (double)userEnterViewHeight;
- (double)userEnterViewSpacing;
- (void)registerUserEnterNodeProcessorWithNodeType:(id)a0;
- (void)playEffectUseUserEnterQueueWithMessage:(id)a0;
- (void)receiveMemberMessage:(id)a0;
- (void)setUserEnterEnable:(BOOL)a0;
- (void)playEffectOnUserEnter:(id)a0;
- (void)bindConfiguration;
- (void)setUserEnterOriginY:(double)a0;
- (void)resetUserEnterFrame;
- (void)removeUserEnterView;
- (void)userEnterViewProduced:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
