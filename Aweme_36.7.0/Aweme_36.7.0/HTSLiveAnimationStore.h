@class HTSEventContext, HTSGroupedLiveMessageHandler, NSPredicate, NSString;
@protocol IESLiveRoomService, HTSLiveAnimationReactions;

@interface HTSLiveAnimationStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSPredicate *notifyMessagePredicate;
@property (nonatomic) BOOL enableGiftModuleHandlePrizeNotice;
@property (nonatomic) BOOL degradeForNotifyMessage;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<HTSLiveAnimationReactions> actor;
@property (readonly, nonatomic) HTSGroupedLiveMessageHandler *groupedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerHandlers;
- (BOOL)enableAnimationNotification;
- (BOOL)enableRankListAwardMessage;
- (id)initWithActor:(id)a0;
- (void)dispatchFakeMessage:(id)a0;
- (void)setFilterPredicateForNotifyMessage:(id)a0;
- (void)didUpdateRoom:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
