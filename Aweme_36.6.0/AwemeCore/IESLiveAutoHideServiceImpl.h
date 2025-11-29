@class NSString;
@protocol IESLiveAutoHideServiceInjector;

@interface IESLiveAutoHideServiceImpl : IESLiveGeneralBaseService <IESLiveAutoHideService>

@property (retain, nonatomic) id<IESLiveAutoHideServiceInjector> injector;
@property (nonatomic) BOOL didLock;
@property (nonatomic) BOOL isAllComponentsHide;
@property (nonatomic) BOOL isHiddenAllComponentsForPortrait;
@property (nonatomic) BOOL blockAutoHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)hideComponentsForPortrait;
- (void)showComponentsForPortrait;
- (void)serviceDidLaunch;
- (void)bindInjector:(id)a0;
- (void)forceToUnlock;
- (void)hideAllElements;
- (void)showAllElements;
- (void)resetHideCount;
- (void)delayToHideAllElements;
- (void)resetLockButtonPositionNormal;
- (void)resetLockButtonPositionSideStyle;
- (void)hideComponentsForPortraitImmediate;
- (void)delayToHideComponentsForPortrait;
- (id)lockButtonForLandscape;
- (void)blockAutoHideAllElements;
- (void)cancelBlockAutoHideAllElements;
- (void)triggerAutoHideOnVoiceOverRunning;
- (void)triggerAutoHide;
- (void).cxx_destruct;

@end
