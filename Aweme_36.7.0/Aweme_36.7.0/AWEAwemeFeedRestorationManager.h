@class NSString, NSMutableArray, AWEAwemeModel;

@interface AWEAwemeFeedRestorationManager : NSObject <HMDAPPExitReasonDetectorProtocol, AWEUserMessage>

@property (retain, nonatomic) AWEAwemeModel *restoredAwemeModel;
@property (nonatomic) int relaunchReason;
@property (retain, nonatomic) AWEAwemeModel *lastSavedModel;
@property (nonatomic) double lastEnterBackgroundTime;
@property (retain, nonatomic) NSMutableArray *didPlayFinishedVideos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isRestoredAwemeModel:(id)a0;
- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (BOOL)restorationEnable;
- (id)getLastValidSavedAwemeModel;
- (BOOL)p_canSaveAwemeModel:(id)a0;
- (void)p_applicationDidEnterBackground;
- (void)p_handleVideoDidPlayFinishNotification:(id)a0;
- (BOOL)p_isValidCacheModel:(id)a0;
- (id)restorationConfig;
- (BOOL)p_filterFinishPlayedVideo;
- (double)p_filterPlayedProcessVideo;
- (double)p_enterBackgroundInterval;
- (void)clearUpLastSavedAwemeModel;
- (id)relaunchReasons;
- (double)restorationExpireTime;
- (id)restorationAwemeTypes;
- (id)restorationVideoFormats;
- (long long)restorationVideoMaxDuration;
- (BOOL)p_canSaveAwemeModelByProcess:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
