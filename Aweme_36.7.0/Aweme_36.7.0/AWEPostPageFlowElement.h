@interface AWEPostPageFlowElement : AWEPostPageElement

@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isViewAppearForDeactiveNLEIfNeed;
@property (nonatomic) BOOL needRefreshCover;

+ (Class)aAWEStudioPublishAwemeAdapterClass;
+ (Class)aACCMidVideoCreationProtocolClass;
+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (void)p_setup;
- (id)aAWEStudioPublishAwemeAdapter;
- (void)updateCover;
- (id)aACCMidVideoCreationProtocol;
- (void)contextDidReady;
- (void)audioSessionReset;
- (BOOL)needObserveCaptureCurrentFrameDone;
- (BOOL)p_enablePrePublish;
- (void)preCheckModelValidIfNeed:(id)a0;
- (void)p_onChallengeInfoDidChangeNotification:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)addNotificationObservers;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appDidBecomeActive;

@end
