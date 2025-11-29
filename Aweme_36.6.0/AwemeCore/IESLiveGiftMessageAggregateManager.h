@class NSString;
@protocol IESLiveRoomService, HTSLiveNativeAnimationEventAction;

@interface IESLiveGiftMessageAggregateManager : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<HTSLiveNativeAnimationEventAction> eventActionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)notifyGiftAggregateDataIfNeed:(id)a0;
- (BOOL)isSendToUid:(id)a0 giftMessage:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
