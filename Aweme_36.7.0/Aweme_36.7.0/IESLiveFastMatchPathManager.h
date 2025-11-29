@class NSMutableArray;

@interface IESLiveFastMatchPathManager : NSObject

@property (retain, nonatomic) NSMutableArray *fastMatchRoomStack;
@property (retain, nonatomic) NSMutableArray *fastMatchTrackStack;
@property (nonatomic) BOOL fastMatchV4FirstUsedFlag;

+ (id)shardManager;

- (void)audienceWillEnterFastMatchRoomWithID:(id)a0 requestPage:(id)a1 mute:(id)a2 isFromOutside:(BOOL)a3 isLiveEnd:(BOOL)a4;
- (void)audienceWillEnterFastMatchRoomWithID:(id)a0 requestPage:(id)a1 mute:(id)a2 isFromOutside:(BOOL)a3 orderSongList:(id)a4 isLiveEnd:(BOOL)a5;
- (id)getCurrentRequestPage;
- (id)p_trackNodeByRoomID:(id)a0;
- (BOOL)audienceShouldStartApply;
- (void)audienceWillFastMatchApplyWithRoomId:(id)a0;
- (void)audienceWillEnterFastMatchRoomWithID:(id)a0 requestPage:(id)a1 mute:(id)a2 isFromOutside:(BOOL)a3;
- (void)audienceWillEnterFastMatchRoomWithID:(id)a0 requestPage:(id)a1 mute:(id)a2 isFromOutside:(BOOL)a3 orderSongList:(id)a4;
- (void)audienceWillReturnBack;
- (BOOL)isCurrentRequestPageFromShakeMatch;
- (id)lastRoomMutedState;
- (id)lastRoomOrderSongList;
- (BOOL)currentIsFromOutside;
- (BOOL)getCurrentIsLiveEndWithRoomId:(id)a0;
- (void)resetStack;
- (void)markFastMatchTriggeredPerApply:(BOOL)a0 roomID:(id)a1;
- (BOOL)fastMatchTriggeredPerApplyByRoomID:(id)a0;
- (void)markApplyByFastMatchInRoom:(BOOL)a0 roomID:(id)a1;
- (BOOL)applyByFastMatchInRoomByRoomID:(id)a0;
- (void)setupFastMatchResultTagTrackInfo:(id)a0 roomID:(id)a1;
- (id)fastMatchResultTagTrackInfoByRoomID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
