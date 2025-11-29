@class NSString, HTSEventContext, IESLivePublicScreenContext, IESLivePublicScreenView;

@interface IESLivePublicScreenDirectorRoomAttachment : NSObject <IESLiveIMMessageSubscriber, IESLivePSCommonAttachmentProtocol>

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
- (id)abilityProtocol;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)messageReceived:(id)a0;

@end
