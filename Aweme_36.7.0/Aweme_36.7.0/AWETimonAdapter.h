@class NSString;

@interface AWETimonAdapter : NSObject <TimonDelegate, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startInhouseTask;
+ (void)startDelayTask;
+ (void)startDptPublishTest;
+ (void)registerCustomCanHandleBuilder;
+ (Class)aAWEPrivacyProtocolAdapterClass;
+ (id)networkSyncRequestSubscribers;
+ (id)networkAsyncRequestSubscribers;
+ (id)networkSyncResponseSubscribers;
+ (id)networkAsyncResponseSubscribers;
+ (void)startUIActionWithThreadTransfer:(BOOL)a0;
+ (void)start;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isTeenMode;
- (BOOL)isBasicMode;
- (void)setupSDK;
- (BOOL)hasAgreedPrivacy;
- (BOOL)enableDispatchHook;
- (id)defaultPrivacyProtocolWithKey:(id)a0;
- (void)setUpPreTimonAwemeCustomConfig;
- (void)setUpAfterTimonAwemeCustomConfig;
- (void)registerCustomPipeline;
- (void)configDetectorContext;
- (void)setupIDFAIDFVHook;
- (void)registerSubcribersForDetection;
- (void)setAlbumPermissionAlert;
- (void)setAlbumServiceEnable;
- (id)defaultCertConfigs;
- (id)getLynxExtraInfo:(id)a0;
- (id)aAWEPrivacyProtocolAdapter;
- (BOOL)isElderMode;
- (BOOL)enableAutoReadPasteboard;
- (BOOL)enableReadExifLocation;
- (BOOL)isInSplash;
- (id)keysForSelfChannel;
- (id)urlIfTopIsWebViewController;
- (id)crossPlatformCallingInfos;
- (id)extraInfoForViewController:(id)a0;
- (BOOL)enableAutoSyncConfig;
- (BOOL)usePasteboardDevSuiteForRead;
- (BOOL)usePasteboardDevSuiteForWrite;
- (id)init;
- (void)dealloc;
- (id)udid;
- (id)defaultRules;

@end
