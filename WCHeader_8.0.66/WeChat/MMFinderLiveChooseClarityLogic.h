@class LiveChooseClarityCacheInfo, NSString, WCFinderLiveAudienceLogReporter, MMFinderLiveTaskId, MMFinderLiveChooseClarityView, MMLiveConnectMicLogic;

@interface MMFinderLiveChooseClarityLogic : NSObject <MMFinderLiveChooseClarityDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) MMLiveConnectMicLogic *connectMicLogic;
@property (retain, nonatomic) WCFinderLiveAudienceLogReporter *audienceReporter;
@property (nonatomic) BOOL isChanging;
@property (retain, nonatomic) MMFinderLiveChooseClarityView *clarityView;
@property (nonatomic) long long oldVideoQualityLevel;
@property (retain, nonatomic) LiveChooseClarityCacheInfo *cacheInfo;
@property (copy, nonatomic) id /* block */ onChooseClarityChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)resetClarityCache;
- (void)updateWithFromScene:(unsigned long long)a0 connectMicLogic:(id)a1 audienceReporter:(id)a2;
- (void)onClarityChooseEntranceSelectWithScene:(unsigned long long)a0;
- (void)clarityMethodSelect:(id)a0 indexPath:(id)a1;
- (BOOL)handleConnectMic;
- (void)handleSwitchCdn:(id)a0;
- (BOOL)isNeedSwitchCdn;
- (void)initRecentClarityChoose:(id)a0;
- (id)getCacheInfoFromCdnTransInfo:(id)a0 liveId:(unsigned long long)a1;
- (id)getRecentClarityChooseFromCache;
- (void)onLiveTask:(id)a0 cdnPlayEventId:(int)a1 params:(id)a2;
- (id)getChooseCdnTransInfoWithParams:(id)a0;
- (BOOL)checkTask:(id)a0;
- (id)liveTask;
- (void).cxx_destruct;

@end
