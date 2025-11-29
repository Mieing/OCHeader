@class HTSEventContext, NSString, IESLiveInteractionBattleFullLinkMonitor, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveGuestBattleEventTracker : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveInteractionBattleFullLinkMonitor *monitor;
@property (retain, nonatomic) NSString *finishReason;
@property (copy, nonatomic) NSString *finishUserId;
@property (retain, nonatomic) NSMutableDictionary *loadTimestampDict;
@property (nonatomic) long long isRecorded;
@property (copy, nonatomic) NSString *requestPage;

- (void)didSetAttachingDIContext;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (id)initWithRoom:(id)a0 eventContext:(id)a1;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2;
- (id)getSubStageStr;
- (id)getPlayStageStr;
- (id)getPlayLayoutStr;
- (id)playStage;
- (id)appendCommonExtra:(id)a0;
- (void)tryInsertDuration:(id)a0 withKey:(int)a1;
- (double)relativeTimestampWithKey:(int)a0;
- (id)KeyStrWithkey:(int)a0;
- (void)trackSettingsPageWithActionType:(id)a0 withButtonType:(id)a1;
- (void)monitorIMWithName:(id)a0 message:(id)a1 extra:(id)a2;
- (void)monitorWithAPIPath:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)recordTimestampWithKey:(int)a0;
- (void)monitorStartGuestBattleLoadDurationIfNeed;
- (void).cxx_destruct;

@end
