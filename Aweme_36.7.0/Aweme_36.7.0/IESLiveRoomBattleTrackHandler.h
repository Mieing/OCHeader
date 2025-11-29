@class HTSEventContext, NSMutableDictionary, IESLiveInteractionBattleFullLinkMonitor, NSString;
@protocol IESLiveRoomService, IESLiveRoomBattleProvider;

@interface IESLiveRoomBattleTrackHandler : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveRoomBattleProvider> roomBattleProvider;
@property (retain, nonatomic) IESLiveInteractionBattleFullLinkMonitor *monitor;
@property (retain, nonatomic) NSMutableDictionary *startLoadTimestampDict;
@property (nonatomic) long long guestCntBeforeSwitchScene;
@property (nonatomic) long long guestCntAfterSwitchScene;
@property (copy, nonatomic) NSString *requestPage;

- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (id)anchorTypeStr;
- (id)roomBattleTrackExtra;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2;
- (id)appendCommonExtra:(id)a0;
- (void)monitorIMWithName:(id)a0 message:(id)a1 extra:(id)a2;
- (void)monitorWithAPIPath:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)recordTimestampWithKey:(int)a0;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2 metric:(id)a3;
- (id)initWithTrackContext:(id)a0 room:(id)a1 DIContext:(id)a2;
- (id)playStageWithStatus:(long long)a0;
- (id)userTypeStr;
- (id)invitePageStr;
- (void)recordTimestampWithKey:(int)a0 timestamp:(double)a1;
- (void)monitorStartRoomBattleLoadDurationIfNeed;
- (id)keyStrWithkey:(int)a0;
- (void).cxx_destruct;

@end
