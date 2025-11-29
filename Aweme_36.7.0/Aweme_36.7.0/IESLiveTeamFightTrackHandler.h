@class HTSEventContext, NSString, IESLiveInteractionBattleFullLinkMonitor, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveTeamFightTrackHandler : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveInteractionBattleFullLinkMonitor *monitor;
@property (nonatomic) double clickStartTimestamp;
@property (nonatomic) long long isCreateRecorded;
@property (nonatomic) long long isStartRecorded;
@property (copy, nonatomic) NSString *requestPage;
@property (retain, nonatomic) NSString *finishReason;
@property (nonatomic) long long finishFightTime;
@property (copy, nonatomic) NSString *finishUserId;
@property (nonatomic) long long guestCntBeforeSwitchScene;
@property (nonatomic) long long guestCntAfterSwitchScene;
@property (retain, nonatomic) NSMutableDictionary *createLoadTimestampDict;
@property (retain, nonatomic) NSMutableDictionary *startLoadTimestampDict;

- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (id)statusStr;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2;
- (id)appendCommonExtra:(id)a0;
- (void)monitorIMWithName:(id)a0 message:(id)a1 extra:(id)a2;
- (void)monitorWithAPIPath:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2 metric:(id)a3;
- (id)initWithTrackContext:(id)a0 room:(id)a1 DIContext:(id)a2;
- (id)userTypeStr;
- (void)cleanCreateDict;
- (void)recordCreateTimestampWithKey:(int)a0;
- (void)recordStartTimestampWithKey:(int)a0;
- (id)createFlexibleTeamFightExtraWithTeamfightInfo:(id)a0;
- (void)monitorStartTeamFightLoadDurationIfNeed;
- (void)recordCreateTimestampWithKey:(int)a0 timestamp:(double)a1;
- (void)recordStartTimestampWithKey:(int)a0 timestamp:(double)a1;
- (BOOL)isAnchorPartWithTeamInfos:(id)a0;
- (id)createFlexibleTeamFightExtraWithTeamfightModel:(id)a0;
- (id)statusStrWithStatus:(long long)a0;
- (void)monitorCreateTeamFightLoadDurationIfNeed;
- (void)tryInsertCreateDuration:(id)a0 withKey:(int)a1;
- (double)relativeCreateTimestampWithKey:(int)a0;
- (id)createKeyStrWithkey:(int)a0;
- (void)tryInsertStartDuration:(id)a0 withKey:(int)a1;
- (void)cleanStartDict;
- (double)relativeStartTimestampWithKey:(int)a0;
- (id)startKeyStrWithkey:(int)a0;
- (void).cxx_destruct;

@end
