@class IESLivePublicScreenView, NSString, HTSEventContext, IESLivePublicScreenContext, IESLiveMessageInteractionDataCollection;

@interface IESLivePublicScreenCommonAttachment : NSObject <IESLiveUserEnterActions, IESLivePublicScreenCommonFunctionProtocol, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) IESLiveMessageInteractionDataCollection *miDataCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (BOOL)shouldActive;
- (void)userEnterDidEndDisplayWithData:(id)a0;
- (void)dataDisplayOnPublicScreen:(id)a0;
- (void)dataDisplayOnUserEnter:(id)a0;
- (void)individualStrategyEffectType:(long long)a0;
- (void)envalueInfoStrategyMessageListHeat:(unsigned long long)a0;
- (void)startDataCollect;
- (void)stopDataCollect;
- (id)abilityProtocol;
- (void)setupWithDIContext:(id)a0 eventContext:(id)a1 room:(id)a2;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
