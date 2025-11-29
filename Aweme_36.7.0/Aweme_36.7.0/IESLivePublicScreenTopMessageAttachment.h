@class NSArray, NSString, IESLivePublicScreenContext, HTSEventContext, IESLivePublicScreenView;

@interface IESLivePublicScreenTopMessageAttachment : NSObject <IESLiveTopMessageService, IESLivePublicScreenEventObserver, IESLivePSCommonAttachmentProtocol>

@property (nonatomic) BOOL nonBackendMessageArrivedFirst;
@property (nonatomic) BOOL messageFromBackendArrivedFirst;
@property (nonatomic) BOOL historyMsgArrived;
@property (nonatomic) long long batchRefreshStyle;
@property (nonatomic) BOOL skipFirstFetchFromIM;
@property (copy, nonatomic) NSArray *topMessages;
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
- (void)publicScreenFirstStartRefresh:(id)a0;
- (id)abilityProtocol;
- (void)handleBackendMessages:(id)a0;
- (void)trackBackendRequestResultWithErrorReason:(id)a0;
- (void)updateDisplayedMsgWithMessages:(id)a0;
- (void)subscribeTopMessageFromBackEndData;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)messageReceived:(id)a0;

@end
