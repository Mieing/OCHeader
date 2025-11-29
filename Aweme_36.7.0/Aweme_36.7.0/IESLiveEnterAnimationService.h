@class NSString, NSDictionary, IESLiveEnterAnimationView, IESLiveEnterAnimationViewModel;

@interface IESLiveEnterAnimationService : IESLiveGeneralBaseService <IESLiveEnterAnimationService>

@property (retain, nonatomic) NSDictionary *animConfig;
@property (retain, nonatomic) IESLiveEnterAnimationView *animView;
@property (retain, nonatomic) IESLiveEnterAnimationViewModel *model;
@property (copy, nonatomic) id /* block */ dismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)showEnterAnimationIfNeed;
- (BOOL)p_canShowEnterPublicAreaAnimation;
- (void)p_showEnterAnimation;
- (void)p_trueShowEnterAnimationWithImage:(id)a0;
- (void)p_startDismissTask;
- (void).cxx_destruct;

@end
