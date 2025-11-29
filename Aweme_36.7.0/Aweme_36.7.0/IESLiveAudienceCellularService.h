@class NSTimer, NSString;
@protocol IESLiveInternalRouter, IESLiveCustomConfig;

@interface IESLiveAudienceCellularService : IESLiveGeneralBaseService <HTSLiveNetworkStatusActions>

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (nonatomic) long long currentNetStatus;
@property (weak, nonatomic) id noWifiAlert;
@property (retain, nonatomic) NSTimer *backgroundCountTimer;
@property (nonatomic) BOOL isPauseBySelf;
@property (nonatomic) BOOL isInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (void)load;

- (void)didSetAttachingDIContext;
- (void)getNetworkStatus;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)serviceDidLaunch;
- (void)changeToCellularNetwork;
- (void)changeToWifiNetwork;
- (void)changeToNetworkUnreachable;
- (void)checkNetworkForEnterWithCertainBlock:(id /* block */)a0;
- (BOOL)isBackgroundCutoffEnable;
- (BOOL)p_isInPipMode;
- (void)p_originLogicForEnterBackground;
- (void)pauseStreamIfNeed:(id)a0 reason:(unsigned long long)a1;
- (void)trackBackgroundCutStreamEvent;
- (void)showCellualrNetworkNoWifiAlert;
- (void)showCellularNetworkAlert;
- (void)showNetworkAlertWithCertainBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)trackNoWifiAlertShowEvent;
- (void)trackFreeFlowAlertClickOpenEvent;
- (void)trackFreeFlowAlertClickCancelEvent;
- (void)trackFreeFlowAlertShowEvent;
- (long long)backgroundCutoffTimeOutInterval;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
