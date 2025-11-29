@class HTSEventContext, NSString, HTSLiveApi, IESLivePublicScreenContext, IESLivePublicScreenDataFlowManager;

@interface IESLivePublicScreenRoomIntroAttachment : NSObject <IESLivePSDataFlowAttachmentProtocol, IESLivePublicScreenRoomIntroProvider>

@property (retain, nonatomic) HTSLiveApi *api;
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
- (BOOL)shouldShowRoomIntro:(id)a0;
- (id)abilityProtocol;
- (BOOL)shouldShowRoomIntroOnAnnouncementScene:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
