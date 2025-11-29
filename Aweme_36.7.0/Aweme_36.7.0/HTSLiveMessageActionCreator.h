@class IESLiveIMMessageDispatcher, NSString, HTSLiveMessageFakedFilter, IESLiveMessageFilterProcesser, IESLiveIMDataSyncPreloadReceiver, IESLiveIMMessageClient, HTSLiveMessageDuplicatedFilter, IESLiveDataSyncManager;
@protocol IESLiveRoomService, IESLiveMonitor, IESLiveMessageConfig;

@interface HTSLiveMessageActionCreator : NSObject <IESLiveSEIListener, IESLiveMessageActionCreatorProtocol> {
    BOOL _isStarted;
    BOOL _messageDispatchStarted;
    HTSLiveMessageDuplicatedFilter *_messageDuplicatedFilter;
    HTSLiveMessageFakedFilter *_messageFakedFilter;
}

@property (retain, nonatomic) id<IESLiveMessageConfig> messageConfig;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) IESLiveMessageFilterProcesser *filterProcesser;
@property (retain, nonatomic) IESLiveIMMessageDispatcher *imDispatcher;
@property (retain, nonatomic) IESLiveIMMessageClient *imClient;
@property (retain, nonatomic) IESLiveDataSyncManager *wrdsManager;
@property (retain, nonatomic) NSString *currentRoomSign;
@property (nonatomic) BOOL didHandleFirstMessage;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL wrdsPreloadEnable;
@property (retain, nonatomic) IESLiveIMDataSyncPreloadReceiver *preload;
@property (nonatomic) BOOL addEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableStartEarlier;
@property (nonatomic) BOOL enableMessageReplay;

+ (id)anchorMessageCreatorWithRoom:(id)a0;
+ (id)audienceMessageCreatorWithRoom:(id)a0;

- (void)remoteRoomDataReady:(id)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)userDidLogin:(id)a0;
- (void)userDidLogout;
- (void)userDidUpdate:(id)a0;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)startMessageDispatch;
- (void)stopMessageDispatch;
- (void)addFakeMessage:(id)a0;
- (id)initWithDIContext:(id)a0 config:(id)a1;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)startMessageDispatchSync;
- (void)stopMessageReplay;
- (void)startEarlier;
- (void)startMessageReplay;
- (BOOL)shouldDispatch:(id)a0;
- (void)doMessageProcess:(id)a0;
- (id)wrdsPreloadRoomIdArray;
- (void)monitorMessageDelayTimeIfNeeded:(id)a0;
- (void)monitorMessageConfigErrorWithRoom:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
