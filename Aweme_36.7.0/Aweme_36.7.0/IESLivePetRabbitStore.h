@class IESLivePetRabbitMessageQueue, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLivePetRabbitReaction;

@interface IESLivePetRabbitStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLivePetRabbitMessageQueue *messageQueue;
@property (copy, nonatomic) id /* block */ subscribePetInfoBlock;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<IESLivePetRabbitReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWith:(id)a0 componentContext:(id)a1;
- (void)consumeMessage:(id /* block */)a0;
- (void)stopConsumeMessage;
- (void)handlePetRabbitMessage:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
