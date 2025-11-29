@class IESLiveSoloKTVTeaTracker, NSString, NSDictionary, IESLiveSoloKTVTraceMonitor, IESLiveSoloKTVByteAudioMonitor, IESSoloKTVSmallWindow;
@protocol HTSLiveStreamPlayerProvider, IESLiveRoomService, IESLiveSoloKTVPublishService, IESLiveSoloKTVShareService, IESLiveInteractionModule, IESSoloKTVGlobalLiveCircleDelegate, IESLiveBigPartyAudienceRouter;

@interface IESSoloKTVGlobalManager : NSObject <IESSoloKTVRouter>

@property (nonatomic) long long currentRecordState;
@property (nonatomic) BOOL lastLiveMuteState;
@property (nonatomic) BOOL lastDisableMuteOperation;
@property (retain, nonatomic) id<IESLiveSoloKTVPublishService> publishService;
@property (retain, nonatomic) id<IESLiveSoloKTVShareService> shareService;
@property (weak, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (weak, nonatomic) id<IESLiveBigPartyAudienceRouter> bigPartyAudienceRouter;
@property (weak, nonatomic) id<HTSLiveStreamPlayerProvider> streamPlayerProvider;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSString *enterSource;
@property (nonatomic) long long smallViewTaskType;
@property (retain, nonatomic) IESSoloKTVSmallWindow *smallWindow;
@property (weak, nonatomic) id<IESSoloKTVGlobalLiveCircleDelegate> soloKTVDelegate;
@property (retain, nonatomic) IESLiveSoloKTVTraceMonitor *traceMonitor;
@property (retain, nonatomic) IESLiveSoloKTVByteAudioMonitor *baMonitor;
@property (retain, nonatomic) IESLiveSoloKTVTeaTracker *tracker;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)pushToSoloKTVWithSource:(id)a0 schemaParams:(id)a1 room:(id)a2;
- (void)removeBannerSection;
- (void)updateWithRoomService:(id)a0;
- (void)muteRoomPlayerStatus;
- (void)interactPrepareWillReady:(id)a0;
- (void)willLoadSoloKTVRoom;
- (void)openMySungView;
- (void)requestAddSongWithMusicModel:(id)a0;
- (BOOL)isSoloKTVDelegateReady;
- (void)resumeRoomPlayerStatus;
- (void)updateCurrentRecordState:(long long)a0;
- (BOOL)isCurrentUserLinkMic;
- (void)removeSmallWindow;
- (void)stopConnectionWithCompletion:(id /* block */)a0;
- (void)showSmallWindowWithView:(id)a0;
- (void)setupSmallWindow;
- (id)smallWindowContainer;
- (long long)defaultSelectedFirstLevelIndexWithFirstLevelTab:(int)a0;
- (void).cxx_destruct;
- (void)enter;
- (void)reset;
- (void)end;

@end
