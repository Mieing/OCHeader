@class NSString;
@protocol IESLiveIMFilter;

@interface IESLiveIMBaseDispatcher : IESLiveIMMessageNormalDispatcher <IESLIveMessageDelayProvider, IESLiveMessageProcesserProvider>

@property (nonatomic) BOOL isFirstReceive;
@property (retain, nonatomic) id<IESLiveIMFilter> messageDuplicatedFilter;
@property (retain, nonatomic) id<IESLiveIMFilter> messageFakedFilter;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) unsigned long long decoderSceneType;
@property (nonatomic) long long ntpDiffTime;
@property (nonatomic) BOOL useHeartBeatSEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *firstFetchCursor;
@property (nonatomic) BOOL noMoreHistoryMessage;

- (long long)decideMessageCacheType:(id)a0;
- (double)decideDelayMessageDispatchTime:(id)a0;
- (void)cleanCaches;
- (void)didRecieveMessages:(id)a0;
- (void)startDispatch;
- (void)stopDispatch;
- (BOOL)filterBeforeDispatchMessage:(id)a0;
- (void)enableLinkMessageDelay:(BOOL)a0;
- (BOOL)shouldDispatchMessageAfterFakedFilter:(id)a0;
- (BOOL)shouldDispatchMessage:(id)a0;
- (void)didReceiveFirstBatchMessages:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetFilter;

@end
