@class NSDateFormatter, HTSEventContext, NSString, IESLiveMessageInteractionDisplayModel;
@protocol IESLiveRoomService;

@interface IESLiveMessageInteractionDataCollection : NSObject <IESLiveRoomWatchTimeDelegate, IESLiveMessageInteractionDataCollectionProvider>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long ntpDiffTimeMS;
@property (nonatomic) long long trackInterval;
@property (retain, nonatomic) NSDateFormatter *formatter;
@property (nonatomic) double localStartTimeS;
@property (nonatomic) double localEndTimeS;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *commentData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *enterData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *followData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *likeData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *shareData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *giftData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *ecomData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *highEnterData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *individualStrategyData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *envalueInfoStrategyData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *commonData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *allMessageDisplayData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *chatActionDisplayData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *systemActionDisplayData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *giftActionDisplayData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *otherActionDisplayData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *highPriorityDisplayData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *mediumPriorityDisplayData;
@property (retain, nonatomic) IESLiveMessageInteractionDisplayModel *lowPriorityDisplayData;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)liveRoomWatchMinitTick:(unsigned long long)a0;
- (void)dataDisplayOnPublicScreen:(id)a0;
- (void)dataDisplayOnUserEnter:(id)a0;
- (void)individualStrategyEffectType:(long long)a0;
- (void)envalueInfoStrategyMessageListHeat:(unsigned long long)a0;
- (void)tr_trackMessageDisplayOnScreenWithReason:(long long)a0;
- (void)handlePublicScreenFullLinkDataWithMessage:(id)a0;
- (void)trackPublicScreenFullLinkDisplayDelay;
- (id)initWithDIContext:(id)a0 room:(id)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
