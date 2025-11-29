@class NSString, NSTimer, IESLiveRoomStateApi, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedCheckAliveController : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnerFeedDisplayAction, IESLiveInnerFeedUpdateMessage>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) BOOL checkEnable;
@property (nonatomic) BOOL byteLinkAgentEnable;
@property (nonatomic) long long checkInterval;
@property (nonatomic) long long beforeCheckInterval;
@property (nonatomic) long long checkAboveCount;
@property (nonatomic) long long checkBelowCount;
@property (nonatomic) BOOL isChecking;
@property (retain, nonatomic) NSTimer *deleteTimer;
@property (nonatomic) BOOL liveDisappeared;
@property (retain, nonatomic) IESLiveRoomStateApi *roomStateApi;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subscripRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidAppear;
- (void)innerFeedDidDisappear;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedDataDidChangeWithType:(unsigned long long)a0 datas:(id)a1 hasMore:(BOOL)a2 success:(BOOL)a3;
- (void)stopRoomStateChecker;
- (void)subscribeInnerFeedLiveStatusChange:(id)a0;
- (void)setRoomCheckerConfig;
- (void)checkRoomState;
- (id)roomsNearByCurrentRoom;
- (void)deleteRooms:(id)a0;
- (id)roomsBetweenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)trackFinishedRooms:(id)a0;
- (id)subscribeRoomsWithRangeValue:(long long)a0;
- (void)startRoomStateChecker;
- (void)subscribeLiveStatusWithSwipe:(BOOL)a0;
- (id)models;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
