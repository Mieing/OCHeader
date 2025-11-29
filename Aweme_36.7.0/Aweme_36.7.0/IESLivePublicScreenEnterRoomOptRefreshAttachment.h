@class HTSEventContext, NSString, IESLivePublicScreenContext, IESLivePublicScreenDataFlowManager;

@interface IESLivePublicScreenEnterRoomOptRefreshAttachment : NSObject <IESLivePSDataFlowAttachmentProtocol, IESLivePublicScreenEventObserver>

@property (nonatomic) long long useOptimizeConfigTime;
@property (nonatomic) double refreshDuration;
@property (nonatomic) long long refreshMessageCount;
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
- (void)publicScreenDidCommitData:(id)a0;
- (id)abilityProtocol;
- (void)setEnterRoomOptimizeConfig;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
