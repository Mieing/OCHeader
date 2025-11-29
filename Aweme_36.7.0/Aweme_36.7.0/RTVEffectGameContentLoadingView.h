@class BDImageView, NSString, UIVisualEffectView, RTVEffectGameContentProgressView, UILabel, RTVCompactStateMachine, RTVEffectGameDownloadTask;
@protocol RTVEffectGameSession, RxInjector, RTVXRControllerInjector, RTVVoipResourceFetcherInterface;

@interface RTVEffectGameContentLoadingView : UIView <RTVCompactStateMachineDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVEffectGameSession> session;
@property (readonly, nonatomic) RTVEffectGameDownloadTask *task;
@property (readonly, nonatomic) BDImageView *gradientImageView;
@property (readonly, nonatomic) BDImageView *gradientIconImageView;
@property (readonly, nonatomic) UIVisualEffectView *visualView;
@property (readonly, nonatomic) BDImageView *backgroundImageView;
@property (readonly, nonatomic) UILabel *gameNameLabel;
@property (readonly, nonatomic) RTVEffectGameContentProgressView *progressView;
@property (readonly, nonatomic) RTVCompactStateMachine *stateMachine;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> voipResourceFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)stateMachine:(id)a0 didTransferFrom:(id)a1 to:(id)a2 transition:(id)a3;
- (void)updateBackgroundURLString:(id)a0;
- (void).cxx_destruct;
- (void)setIconHidden:(BOOL)a0;

@end
