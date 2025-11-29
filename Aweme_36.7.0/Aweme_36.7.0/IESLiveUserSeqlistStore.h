@class HTSLiveRoomStatsMessage, HTSEventContext, NSString, NSMutableDictionary, IESLiveComponentContext, HTSLiveRoomRankMessage, NSNumber;
@protocol IESLiveMessageOptimizeService, IESLiveRoomService, IESLiveUserSeqlistReaction;

@interface IESLiveUserSeqlistStore : NSObject <HTSLiveMessageSubscriber, IESLiveDynamicIslandDataService, IESLiveDirectorRoomMessageAction>

@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isStartDouPlus;
@property (retain, nonatomic) id<IESLiveMessageOptimizeService> messageOptimizeService;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *currentOnLineNumber;
@property (retain, nonatomic) NSString *currentOnLineCount;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (retain, nonatomic) HTSLiveRoomStatsMessage *roomStatsMessage;
@property (retain, nonatomic) HTSLiveRoomRankMessage *rankMessage;
@property (nonatomic) double freshmanSupportMessageStartTime;
@property (retain, nonatomic) NSMutableDictionary *roomIndicatorMessageStartTime;
@property (nonatomic) BOOL rankListFirstReload;
@property (nonatomic) double lastOnlineInfoReportTime;
@property (nonatomic) double onlineInfoReportGap;
@property (nonatomic) BOOL isCollaborating;
@property (retain, nonatomic) HTSLiveRoomStatsMessage *directorRoomStatsMessage;
@property (retain, nonatomic) HTSLiveRoomRankMessage *originRankMessage;
@property (nonatomic) BOOL isAnimationPlaying;
@property (nonatomic) BOOL isNumberChange;
@property (nonatomic) BOOL isShowCompleted;
@property (nonatomic) BOOL hasAudienceEnterView;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<IESLiveUserSeqlistReaction> reactions;
@property (retain, nonatomic) NSNumber *currentCount;
@property (nonatomic) double recordTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)convergedModule;
- (id)onlineWatchUserCount;
- (void)updateUserState:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)showNewDouPlusOrder:(id)a0;
- (void)willStartMessageDispatchForScene:(unsigned long long)a0;
- (void)didStopMessageDispatchForScene:(unsigned long long)a0;
- (void)trackService:(id)a0 startTime:(double)a1 extra:(id)a2;
- (void)didUpdateUserList:(id)a0;
- (void)realEnterRoomRefresh;
- (BOOL)shouldShowAudienceEnter;
- (void)subscribeRankListData;
- (void)refreshUserSeqlist;
- (void)reportOnlineInfoIfNeed:(id)a0 value:(long long)a1 userList:(id)a2;
- (id)douPlusOrderUrl;
- (void)douPlusIndicatorShowNotification:(id)a0;
- (id)doFilterForDirectorRoom:(id)a0;
- (void)delayRefreshRankList:(id)a0;
- (void)refreshRankList:(id)a0;
- (void)handleActionShouldShowIndicatorWithHint:(id)a0;
- (void)loopRefreshUserCountOrEndDouPlus;
- (id)generatorFreshManTrack:(id)a0;
- (id)generatoreRoomIndicatorTrack:(id)a0;
- (BOOL)isUserCountFromUserSeqMessage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
