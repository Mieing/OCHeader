@class NSString, IESLiveIMBaseClient, IESLiveIMSharedClient, IESLiveMessageExtraProcessor, IESLiveIMBaseDispatcher;
@protocol IESLiveMonitor, IESLiveMessageConfig;

@interface IESLiveIMBaseActionCreator : NSObject <IESLiveIMClientDataReceiver, IESLiveUserActions, IESLiveIMClientParamsConfig> {
    BOOL _isStarted;
    BOOL _messageDispatchStarted;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveMessageConfig> messageConfig;
@property (retain, nonatomic) IESLiveIMBaseDispatcher *imDispatcher;
@property (retain, nonatomic) IESLiveMessageExtraProcessor *extraProcessor;
@property (retain, nonatomic) IESLiveIMBaseClient *imClient;
@property (nonatomic) BOOL useUnifiedClient;
@property (nonatomic) long long businessService;
@property (nonatomic) long long businessMethod;
@property (retain, nonatomic) IESLiveIMSharedClient *sharedImClient;
@property (nonatomic) long long bizUniqueToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubscriber:(id)a0 forMessageNames:(id)a1;
- (void)userDidLogin:(id)a0;
- (void)userDidLogout;
- (void)userDidUpdate:(id)a0;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)setupWithMessageConfig:(id)a0;
- (void)startMessageDispatch;
- (void)stopMessageDispatch;
- (id)initWithDIContext:(id)a0 config:(id)a1;
- (void)cleanCaches;
- (id)setupIMDispatcherWithConfig:(id)a0;
- (id)decideReceiver;
- (void)setSeiTimestamp:(id)a0;
- (void)didRecievePacket:(id)a0;
- (id)websocketUrl;
- (id)httpQuerys:(id)a0;
- (id)httpParams:(id)a0;
- (id)websocketHeaders:(id)a0;
- (id)websocketParams:(id)a0;
- (void)setupWithMessageConfig:(id)a0 decoder:(id)a1;
- (BOOL)useUnifiedClient:(id)a0;
- (void)registerBusinessWithConfig:(id)a0;
- (void)unregisterBusinessWithConfig:(id)a0;
- (id)unifiedChannelBizParamsWith:(id)a0;
- (BOOL)switchToSingleClientIfNeed:(id)a0;
- (void)reconnect;
- (void).cxx_destruct;
- (void)stop;
- (id)httpUrl;
- (void)start;
- (long long)defaultTimeout;

@end
