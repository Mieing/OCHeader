@class NSString, HTSEventContext, IESLivePublicScreenContext, IESLivePublicScreenDataFlowManager;

@interface IESLivePublicScreenRoomHeatRefreshAttachment : NSObject <IESLivePublicScreenHeatSubscriber, IESLivePSDataFlowAttachmentProtocol>

@property (nonatomic) BOOL useHotConfig;
@property (nonatomic) double refreshDurationForHot;
@property (nonatomic) long long refreshMessageCountForHot;
@property (nonatomic) double refreshDurationForNormal;
@property (nonatomic) long long refreshMessageCountForNormal;
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
- (double)refreshDuration;
- (void)reportRoomHeatState:(long long)a0;
- (id)abilityProtocol;
- (id)messageListAnchorRefreshConfig;
- (id)messageListRefreshConfig;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (long long)refreshCount;

@end
