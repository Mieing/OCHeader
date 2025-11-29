@class NSArray, NSMutableDictionary, NSString;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchAIGCSingleCardChatMonitorProtocol;

@interface AWESearchAIGCChatMonitor : NSObject <AWESearchAIGCChatMonitorProtocol>

@property (retain, nonatomic) NSMutableDictionary *params;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> firstCardViewModel;
@property (retain, nonatomic) NSMutableDictionary *cachedCardData;
@property (retain, nonatomic) id<AWESearchAIGCSingleCardChatMonitorProtocol> singleCardMonitor;
@property (copy, nonatomic) NSArray *allNeedMergeParamKeys;
@property (nonatomic) BOOL currentRecommendInsightFeedReady;
@property (nonatomic) BOOL currentRecommendInsightCmdComplete;
@property (copy, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFilterDefaultValue;

- (void)beginMonitor;
- (BOOL)containKey:(id)a0;
- (void)addLog:(id)a0;
- (void)addTSForKey:(id)a0;
- (unsigned long long)nowTS;
- (void)calculateParamsWithReason:(long long)a0;
- (BOOL)enableNewChatMonitor;
- (void)calculateSingleCardParamsFilterDefaultValue;
- (void)calculateSingleCardParams;
- (void)reportCombinationSingleCardChatMonitor;
- (void)endMonitorWithReason:(long long)a0;
- (BOOL)isSearchAIGCMonitorMergeAdd:(id)a0;
- (BOOL)isSearchAIGCMonitorMergeMax:(id)a0;
- (BOOL)isSearchAIGCMonitorMergeMin:(id)a0;
- (BOOL)isSearchAIGCMonitorMergeAppend:(id)a0;
- (long long)getCardPropertyValue:(id)a0 forParamKey:(id)a1;
- (long long)getMinPosNum:(long long)a0 :(long long)a1;
- (id)convertToStatusInfo:(long long)a0 statusInfo:(id)a1;
- (id)filteredDefaultValueCardParams;
- (void)sumCount:(long long)a0 withKey:(id)a1;
- (BOOL)needAddTSForReceiveFirstWordByDictionary:(id)a0;
- (id)textDefaultContentByDictionary:(id)a0;
- (id)textQuestionContentByDictionary:(id)a0;
- (id)searchAIGCMonitorMergeRule;
- (BOOL)hasUnFinishTrace;
- (void)recommendInsightEndMonitor;
- (void)recommendInsightFeedReady;
- (void)recommendInsightCmdComplete;
- (void)addFirstTSForKey:(id)a0;
- (id)getCardDataWithCardID:(id)a0;
- (void)upCardData:(id)a0 withCardID:(id)a1;
- (void)receiveNewCardWithViewModel:(id)a0;
- (void)renderStartCardWithViewModel:(id)a0;
- (void)renderEndCardWithViewModel:(id)a0;
- (void)willDisplayCardWithViewModel:(id)a0;
- (void)receiveStreamDataWithDisplay:(id)a0;
- (void)reportReceiveSecurityCardWithResponse:(id)a0;
- (void)sendStreamDataWithDisplay:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (double)beginTime;
- (void)sendTrace;

@end
