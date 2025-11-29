@class NSString, HTSEventContext, IESLiveGCDTimer, IESLivePublicScreenContext, NSMutableArray, IESLivePublicScreenView;

@interface IESLivePublicScreenSquareMsgCollectionAttachment : NSObject <IESLivePublicScreenSquareMsgCollectionProvider, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) NSMutableArray *displayMessage;
@property (nonatomic) long long commonMsgPV;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
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
- (void)recordMessageDisplayed:(id)a0;
- (id)abilityProtocol;
- (void)trackSquareMsgDisplayData;
- (void)trackSquareMsgColletionDataIfNeed;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
