@class NSString, NSMutableDictionary;

@interface AWEIMFirstChatPageLoadTracker : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (nonatomic) BOOL hasTrackedBefore;
@property (retain) NSMutableDictionary *trackInfoV2;
@property BOOL hasTrackedUIRenderingEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isEnableToTrack;
- (void)trackStageV2:(unsigned long long)a0 event:(unsigned long long)a1;
- (void)trackStage:(unsigned long long)a0 event:(unsigned long long)a1;
- (void)trackStageV2:(unsigned long long)a0 event:(unsigned long long)a1 time:(id)a2;
- (id)keyFromStage:(unsigned long long)a0;
- (id)monitorForStageV2:(unsigned long long)a0;
- (id)keyFromStageV2:(unsigned long long)a0;
- (void)uploadAllEventsIfNeeded;
- (double)startIMDuration;
- (double)imLoginDuration;
- (double)sdkLoginDuration;
- (double)didFinishLoginDuration;
- (double)baseDataSourceProcessDuration;
- (double)uiRenderingDuration;
- (double)chatDataBackToMain;
- (double)chatModelSnapshotLoad;
- (double)messageTabFirstPageShowTime;
- (double)skylightCacheLoad;
- (double)tabViewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
