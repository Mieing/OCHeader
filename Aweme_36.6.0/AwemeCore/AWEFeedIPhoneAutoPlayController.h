@class AWEFeedIPhoneAutoPlayBottomNotificationAlert, AWEFeedIPhoneAutoPlayManager, NSTimer, CMMotionManager, NSString, DUXBottomNotification;

@interface AWEFeedIPhoneAutoPlayController : AWEBaseController <AWEFeedControllerProtocol, AWEBasicModeMessage, AWEDigitalWellbeingMessage>

@property (retain, nonatomic) AWEFeedIPhoneAutoPlayManager *autoPlayManager;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long autoPlayNoActionCount;
@property (nonatomic) long long autoPlayCount;
@property (nonatomic) BOOL isUserDrag;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) long long lastPlayIndex;
@property (retain, nonatomic) DUXBottomNotification *openGuideBottomNotification;
@property (retain, nonatomic) AWEFeedIPhoneAutoPlayBottomNotificationAlert *bottomAlert;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) double currentStationarySecond;
@property (nonatomic) BOOL isStationary;
@property (nonatomic) double lastAccelerationX;
@property (nonatomic) double lastAccelerationY;
@property (nonatomic) double lastAccelerationZ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionAdapterClass;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)scrollViewDidScrollEndWithActive;
- (void)scrollViewDidScrollEndWithNotActive;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)addNotification;
- (id)getCurrentAweme;
- (BOOL)isSpecialCard:(id)a0;
- (id)aAWEPlayInteractionAdapter;
- (void)handleVideoDidPlayFinshNotification:(id)a0;
- (BOOL)checkIsUserInteracting;
- (int)getCommerceStandingTime;
- (BOOL)isAFDRichContentContainer;
- (void)detectDeviceStationaryIfNeeded;
- (void)startAccelerometerUpdatesIfNeeded;
- (void)showCloseGuideNoticeIfNeed:(BOOL)a0;
- (void)trackAutoslideEvent;
- (BOOL)showOpenGuideBottomNotificationIfNeeded;
- (int)getCardStandingTime;
- (void)autoPlaySpecialCellToNext:(id)a0 standingTime:(int)a1;
- (int)getLiveStandingTime;
- (BOOL)isAdPlayableShowMask:(id)a0;
- (void)showCloseGuideNotice;
- (void)showOpenGuideBottomNotification:(id)a0;
- (void)openGuideBottomNotificationClicked;
- (void)trackOpenGuideBottomNotificationClicked:(BOOL)a0;
- (void)resetMotionData;
- (void)handleAccelerometerData:(id)a0 error:(id)a1;
- (BOOL)autoPlayScrollToNext;
- (BOOL)checkIsOtherPopupsShow;
- (BOOL)checkSpecialCellAutoPlayIfNeed;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)invalidateTimer;
- (void)scrollViewDidScroll:(id)a0;
- (void)stopAccelerometerUpdates;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewWillDisappear;

@end
