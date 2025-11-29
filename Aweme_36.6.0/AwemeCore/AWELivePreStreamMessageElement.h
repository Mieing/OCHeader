@class NSString, AWELivePreStreamMessageActionCreator, AWELivePreStreamMessageManager, AWELivePreStreamSEIManager;

@interface AWELivePreStreamMessageElement : AWELiveBusinessBaseElement <AWELivePreStreamMessageSubscriber, AWELivePreStreamSEISubscriber>

@property (retain, nonatomic) AWELivePreStreamMessageManager *messageDispatchManager;
@property (retain, nonatomic) AWELivePreStreamMessageActionCreator *messageActionCreator;
@property (retain, nonatomic) AWELivePreStreamSEIManager *preSEIManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)loadNewMessageActionCreator;
- (void)streamPlayer_willStopWithToken:(id)a0;
- (void)stopAndResetMessage;
- (BOOL)enablePreWs;
- (id)syncDataClsNames;
- (void)loadPreSEIManagerIfNeed;
- (void)loadPreMessageDispatcherManagerIfNeed;
- (void)configMessageIfNeed;
- (void)p_stopAndResetMessage;
- (void)startMessageIfNeed:(id)a0;
- (id)syncDataClassNameStrings;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
