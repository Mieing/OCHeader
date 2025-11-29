@class NSString, HTSLiveReplaySettingApi;

@interface IESLiveAnchorRecordPreferenceIMP : NSObject <IESLiveAnchorRecordPreferenceService>

@property (retain, nonatomic) HTSLiveReplaySettingApi *replaySettingApi;
@property (nonatomic) BOOL playbackAllowed;
@property (nonatomic) BOOL realTimeReplayAllowed;
@property (nonatomic) BOOL syncProductAllowed;
@property (nonatomic) BOOL productReplayAllowed;
@property (nonatomic) BOOL audienceRecordAllowed;
@property (nonatomic) BOOL autoPublishAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markEntryShown;
- (BOOL)isEntryShownBefore;
- (void)requestReplaySettingWithCompletion:(id /* block */)a0;
- (id)latestConfig;
- (void)updateReplaySettingSwitchWithType:(long long)a0 enable:(BOOL)a1 roomID:(id)a2 completion:(id /* block */)a3;
- (void)updateReplayRecord:(BOOL)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)updateSyncProduct:(BOOL)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
