@class HTSEventContext, NSString, NSArray, IESLiveGCDTimer, IESLivePublicScreenContext, NSMutableArray, IESLivePublicScreenView;

@interface IESLivePublicScreenASRMsgCollectionAttachment : NSObject <IESLivePublicScreenASRMsgCollectionProvider, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) NSMutableArray *receivedMessage;
@property (retain, nonatomic) NSMutableArray *displayMessage;
@property (nonatomic) long long ntpDiffTimeMS;
@property (copy, nonatomic) NSString *currentUserId;
@property (nonatomic) long long commentActionCount;
@property (nonatomic) long long giftActionCount;
@property (nonatomic) long long interactActionCount;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) long long bufferMaxCount;
@property (copy, nonatomic) NSArray *availMsgMethod;
@property (nonatomic) BOOL enableTrackReceived;
@property (nonatomic) BOOL enableTrackDisplayed;
@property (nonatomic) BOOL enableAsyncOpt;
@property (nonatomic) BOOL enableFixCrash;
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
- (void)recordMessageReceived:(id)a0;
- (void)recordMessageDisplayed:(id)a0;
- (id)abilityProtocol;
- (void)trackAsrMsgReceivedData;
- (void)trackAsrMsgDisplayData;
- (void)trackAsrMsgDisplayDataAsync;
- (BOOL)shouldReportWithMessage:(id)a0;
- (id)typeWithMessage:(id)a0;
- (BOOL)fixed_shouldReportWithMessage:(id)a0;
- (id)configWithAnchor:(BOOL)a0;
- (id)defaultAsrMsgListWithAnchor:(BOOL)a0;
- (void)trackASRMsgColletionDataIfNeed;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
