@class NSString, NSMutableDictionary, IESLiveWatchRecordItem;
@protocol HTSKVStore;

@interface IESLiveAudienceWatchActionManager : NSObject

@property (nonatomic) BOOL audienceHaveScrollUpAction;
@property (nonatomic) BOOL audienceHaveScrollDownAction;
@property (nonatomic) double audienceStayMaxTime;
@property (retain, nonatomic) NSString *audienceStayMaxTimeAnchorID;
@property (retain, nonatomic) NSMutableDictionary *durationDicts;
@property (retain, nonatomic) IESLiveWatchRecordItem *recordLaunchItem;
@property (retain, nonatomic) IESLiveWatchRecordItem *watchLiveItem;
@property (nonatomic) BOOL traceEnable;
@property (nonatomic) double enterLiveTime;
@property (retain, nonatomic) id<HTSKVStore> trackKVStore;
@property (nonatomic) BOOL fixTerminatedTimeEnable;
@property (nonatomic) BOOL audienceHaveOpenDrawerAction;
@property (nonatomic) unsigned long long audienceScrollDirection;
@property (retain, nonatomic) NSString *similarAnchorID;
@property (nonatomic) long long contentCategory;
@property (nonatomic) double appLaunchTime;
@property (copy, nonatomic) id /* block */ traceAudienceWatchParamBlock;

+ (id)shared;

- (void)applicationBecomeActive;
- (void)startRecordWatchRoom:(id)a0 watchScene:(unsigned long long)a1 params:(id)a2;
- (void)endRecordRoom:(id)a0 watchScene:(unsigned long long)a1 params:(id)a2;
- (void)recordEnterBackgroundRoom:(id)a0 watchScene:(unsigned long long)a1 params:(id)a2;
- (void)recordEnterForegroundRoom:(id)a0 watchScene:(unsigned long long)a1 params:(id)a2;
- (void)resetAggrInfo;
- (void)enterRoomRecordFromLaunch:(id)a0;
- (void)prepareForCloseRoom:(id)a0;
- (void)monitorApplication;
- (void)p_updateMaxStayTimeAndAnchorID:(id)a0 duration:(double)a1;
- (id)recordItemWithRoomId:(id)a0 scene:(unsigned long long)a1 needCreate:(BOOL)a2;
- (void)traceEnterBackgroundRoom:(id)a0 watchTime:(double)a1 params:(id)a2;
- (id)commonRoomTraceParams;
- (id)liveSceneWithCurrentRoom:(id)a0;
- (void)_reportWatchTimeInfo:(id)a0;
- (void)audienceLeaveRoom:(id)a0 duration:(long long)a1;
- (void)recordAppearRoom:(id)a0 watchScene:(unsigned long long)a1 params:(id)a2;
- (void)recordDisappearRoom:(id)a0 watchScene:(unsigned long long)a1 params:(id)a2;
- (void)endRecordFromLaunch:(id)a0 watchTime:(double)a1;
- (void)terminateCacheWatchTimeInfo:(id)a0;
- (void)checkCacheLastWatchTimeInfo;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate;
- (void)reset;

@end
