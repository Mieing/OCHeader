@class NSString, HTSEventContext, IESLivePublicScreenContext, IESLivePublicScreenDynamicRefreshStrategy, IESLivePublicScreenDataFlowManager;

@interface IESLivePublicScreenDynamicStrategyRefreshAttachment : NSObject <HTSLiveMessageSubscriber, IESLivePSDataFlowAttachmentProtocol, IESLivePSDynamicStrategyDelegate, IESLivePublicScreenDynamicStrategyRefreshProvider>

@property (retain, nonatomic) IESLivePublicScreenDynamicRefreshStrategy *strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenDataFlowManager *dataFlowManager;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (BOOL)shouldActive;
- (id)allBufferMessages;
- (void)needStayLongerStatusChanged;
- (void)needStayLongerStatusChangeForMention;
- (void)needStayLongerStatusChangeForBatch;
- (id)abilityProtocol;
- (void)refreshConfigChangeWithCount:(long long)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)messageReceived:(id)a0;

@end
