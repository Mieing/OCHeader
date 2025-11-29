@class HTSEventContext, NSString, NSHashTable, IESLiveGCDTimer, IESLivePublicScreenContext, IESLivePublicScreenDataFlowManager;

@interface IESLivePublicScreenMessageHeatAttachment : NSObject <IESLivePSDataFlowAttachmentProtocol, IESLivePublicScreenEventObserver, IESLivePublicScreenHeatProvider>

@property (retain, nonatomic) IESLiveGCDTimer *hotRoomCountTimer;
@property (nonatomic) long long hotJudgeMessageCount;
@property (nonatomic) long long coldJudgeMessageCount;
@property (nonatomic) long long receivedMsgCountInDuration;
@property (nonatomic) long long currentMessageRoomHeat;
@property (retain, nonatomic) NSHashTable *heatSubscribers;
@property (weak, nonatomic) IESLivePublicScreenDataFlowManager *dataFlowManager;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldActive;
- (void)publicScreenMessageProcessed:(id)a0;
- (void)addHeatSubscriber:(id)a0;
- (void)removeHeatSubscriber:(id)a0;
- (id)abilityProtocol;
- (id)messageListHotJudgeConfig;
- (void)setupHotRoomCountTimerWithDuration:(double)a0;
- (void)calculateRoomHeatWithMsgCountInDuration:(long long)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)dealloc;
- (void)setup;

@end
