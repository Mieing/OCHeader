@class HTSEventContext, NSString, IESLivePublicScreenCommonMessageParser, IESLivePublicScreenContext;

@interface IESLivePublicScreenReplicateMsgAttachment : NSObject <IESLivePSAttachmentProtocol>

@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldActive;
- (id)abilityProtocol;
- (void)replicateContentWithNode:(id)a0;
- (void)addPSFloatSheetItem;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
