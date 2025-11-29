@class NSString, HTSEventContext, IESLivePublicScreenContext, IESLiveIMMessageDecoder, NSMutableArray, IESLivePublicScreenView;

@interface IESLivePublicScreenHistoryCommentAttachment : NSObject <IESLiveHistoryCommentService, IESLiveMessageInteractionStrategyResultSubscriber, IESLivePublicScreenEventObserver, IESLivePSCommonAttachmentProtocol>

@property (nonatomic) BOOL enableFirstFetchHistoryMessage;
@property (nonatomic) BOOL enableLoadMoreHistoryMessage;
@property (nonatomic) double firstPatchHistoryRequestTimeout;
@property (nonatomic) BOOL noMoreHistoryMessage;
@property (copy, nonatomic) NSString *nextLoadMoreHistoryMessageCursor;
@property (nonatomic) long long numberOfLoadMoreHistoryMessage;
@property (nonatomic) BOOL isFirstPatchHistoryMessage;
@property (nonatomic) double firstPatchHistoryMessageFetchTime;
@property (retain, nonatomic) IESLiveIMMessageDecoder *messageDecoder;
@property (nonatomic) BOOL dynamicLoadMoreHistoryMessageOpened;
@property (nonatomic) BOOL loadMoreMessageTipShow;
@property (nonatomic) BOOL didSeeMoreMessageTipShowBefore;
@property (nonatomic) BOOL firstFetchMessageArrived;
@property (nonatomic) BOOL firstHistoryMessageArrivedOrFailed;
@property (nonatomic) BOOL loadMoreHistoryNodesAllCreated;
@property (nonatomic) BOOL needCallShowLoadMoreHistoryWhenNodesAllCreated;
@property (retain, nonatomic) NSMutableArray *loadMoreNodes;
@property (nonatomic) BOOL enableFirstMessageShowOpt;
@property (nonatomic) BOOL enablePreloadWithBackend;
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
- (BOOL)messageListViewContentFull;
- (void)detectedStrategyEventWith:(id)a0 result:(long long)a1;
- (void)decision:(id)a0 result:(id)a1;
- (void)strategyResultChange:(long long)a0 withStrategyKey:(id)a1 withChangeReason:(id)a2;
- (void)publicScreenFirstStartRefresh:(id)a0;
- (void)rollSectionDataDidExceedMaxCount;
- (void)showSeeMoreMessageTipViewIfNeeded;
- (void)handlePublicScreenDidScroll:(id)a0;
- (void)updateHistoryNodesWidth:(double)a0;
- (id)historyMessageDynamicLoadStrategy;
- (id)publicScreenHistoryCommentLoadStrategyDefaultFactor;
- (void)handleHistoryCommentLoadStrategy;
- (id)abilityProtocol;
- (void)resetLoadMoreMessageTipStatus;
- (void)setMessageListViewLoadMoreFooter;
- (void)subscribeHistoryMessageFromBackendData;
- (id)handleFirstFetchHistoryMessage:(id)a0;
- (void)handleLoadMoreHistoryMessage:(id)a0;
- (void)logFirstBatchHistoryMessageState:(id)a0;
- (BOOL)isMyHistoryMessage:(id)a0;
- (id)decideHistoryMessageType:(id)a0;
- (void)checkAndStartConsumeMessages;
- (void)showHistoryMessages;
- (void)fetchNextPatchHistoryMessages;
- (void)trackLoadMoreHistoryMessageShowWithCount:(long long)a0;
- (void)showLoadMoreHistoryMessage;
- (void)updateHistoryMessageConfigWithRoom:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)messageReceived:(id)a0;
- (void)startTimeoutTimer;

@end
