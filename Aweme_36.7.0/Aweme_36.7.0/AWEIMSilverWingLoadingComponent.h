@class AWEIMMessage, NSString, NSMutableSet;
@protocol AWEIMSilverWingLoadingTrackInterface;

@interface AWEIMSilverWingLoadingComponent : AWEIMComponentBase <AWEIMSilverWingLoadingInterface, AWEIMMessageListDataAction, AWEFormatFakeLoadingInjectService>

@property (retain, nonatomic) AWEIMMessage *fakeSilverWingLoadingMsg;
@property (nonatomic) BOOL cancelDelayedLoadingMsgDeletion;
@property (copy, nonatomic) NSString *lastCauseLoadingMsgID;
@property (weak, nonatomic) id<AWEIMSilverWingLoadingTrackInterface> loadingTrackComp;
@property (retain, nonatomic) NSMutableSet *waitingReplySet;
@property (retain, nonatomic) NSMutableSet *finishedReqIdSet;
@property (nonatomic) long long expireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)insertFakeLoadingForHelloMsg;
- (void)willSendNewMessage;
- (void)didReceiveAsyncSendMessageResponse:(id)a0;
- (void)didDeleteLoadingMemoryMessage:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)willDeleteMessage:(id)a0;
- (void)didUpdateWithMessage:(id)a0;
- (void)p_addKVO;
- (void)streamLoadingDidFinishWithMessage:(id)a0;
- (BOOL)hasLoadingWithMessage:(id)a0;
- (BOOL)p_hasLoadingWithMessage:(id)a0;
- (BOOL)p_messageFinished:(id)a0;
- (void)p_updateLoadingWithNewMessage:(id)a0;
- (void)p_updateLoadingWithRecieveMessage:(id)a0;
- (void)p_addLoadingIfNeeded;
- (void)p_removeLoadingIfNeeded;
- (void)p_consumeWaitingSetWithMessage:(id)a0;
- (BOOL)p_isCausedLoadingMessage:(id)a0;
- (void)p_consumeAllWaitingSet;
- (void)p_didDeleteLoadingMemoryMessage:(id)a0;
- (BOOL)p_didSuccessAddLoadingIfNeededWithRemoveTime:(unsigned long long)a0;
- (void)p_addToWaitingSetWithMessage:(id)a0;
- (void)p_addLoadingByWaitingSetIfNeeded;
- (void)insertFakeMessageForLoadingIfNeeded;
- (void)removeFakeMessageForLoadingDelayTime:(long long)a0 messageID:(id)a1;
- (BOOL)didSuccessInsertFakeMessageForLoadingIfNeeded;
- (void)p_addToWaitingSetWithMessage:(id)a0 isHiMsg:(BOOL)a1;
- (void).cxx_destruct;

@end
