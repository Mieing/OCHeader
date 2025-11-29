@class NSString, NSMutableString, IESLivePublicScreenContext, HTSEventContext, IESLivePublicScreenView;

@interface IESLivePublicScreenChatAuthAttachment : NSObject <IESLivePublicScreenHandleChatAuthProvider, IESLivePublicScreenEventObserver, IESLivePSCommonAttachmentProtocol>

@property (nonatomic) long long filterTimesWhenEnterRoomChatClosed;
@property (retain, nonatomic) NSMutableString *filterMessagesIdWhenEnterRoomChatClosed;
@property (nonatomic) BOOL didCommittedData;
@property (nonatomic) BOOL chatEnable;
@property (nonatomic) BOOL didReceivedMsg;
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
- (void)publicScreenMessageProcessed:(id)a0;
- (void)handleRoomVerifyMessage:(id)a0;
- (void)filterMessageNodesIfRoomAuthChatClosed:(id)a0;
- (id)abilityProtocol;
- (void)fakeRoomMessageWhenRoomAuthChatChanged:(BOOL)a0;
- (void)delayHideMessageListView;
- (void)chatAuthEnable:(BOOL)a0;
- (BOOL)canShowWhenChatClosed:(id)a0;
- (void)checkMessagelistHiddenStatus;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)dealloc;

@end
