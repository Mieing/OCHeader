@class NSSet, NSString, AWESearchAIGCChatMonitor, NSMutableDictionary;

@interface AWESearchAIGCSingleCardChatMonitor : NSObject <AWESearchAIGCSingleCardChatMonitorProtocol>

@property (copy, nonatomic) NSSet *feChatMonitorMergeParams;
@property (copy, nonatomic) NSSet *needFilterDefaultValueParams;
@property (weak, nonatomic) AWESearchAIGCChatMonitor *chatMonitor;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSMutableDictionary *cardRecordInfoDictionary;
@property (nonatomic) long long generalSendTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAIReferenceCard:(id)a0;

- (unsigned long long)nowTS;
- (void)handleSingleCardRenderInfoBeforeSend;
- (void)sendAllCardTrace:(BOOL)a0;
- (BOOL)needAddTSForReceiveFirstWordByDictionary:(id)a0;
- (id)textDefaultContentByDictionary:(id)a0;
- (id)textQuestionContentByDictionary:(id)a0;
- (void)renderStartCardWithViewModel:(id)a0;
- (void)renderEndCardWithViewModel:(id)a0;
- (void)handleNewCardReceiveFirstDataWithCmdModel:(id)a0;
- (void)loadingCardReceiveWithViewModel:(id)a0;
- (void)handleAppendWithCmdModel:(id)a0;
- (void)receiveStreamDataWithDisplay:(id)a0 cardId:(id)a1;
- (void)handleReplaceWithCmdModel:(id)a0 viewModel:(id)a1;
- (void)updateCardDurationRenderInfoWithCachalotView:(id)a0;
- (void)createRenderInfoWithCmdModel:(id)a0;
- (void)updateReceiveLastDataWithCmdModel:(id)a0;
- (id)cardRecordInfoWithCardId:(id)a0;
- (void)searchAICardRenderMonitorWithParams:(id)a0;
- (void)cardWillDisplay:(id)a0;
- (void)updateSingleCardIsReuseWithViewModel:(id)a0;
- (BOOL)shouldSkipReportForWithInfo:(id)a0;
- (void)sendTraceWithRenderInfo:(id)a0;
- (void)sendTraceAloneWithRenderInfo:(id)a0;
- (id)filteredDefaultValueSingleCardParams:(id)a0;
- (void).cxx_destruct;

@end
