@class IESGCPPBGameFeedTabInfo, NSMutableDictionary, NSString, NSMutableArray, NSArray, AWEGCPStrategyAPI, NSNumber;

@interface AWEGCPStrategyListViewModel : NSObject <AWEGCPStrategyDataManager>

@property (retain, nonatomic) AWEGCPStrategyAPI *api;
@property (nonatomic) long long lastVideoOffset;
@property (nonatomic) long long lastLiveOffset;
@property (nonatomic) long long mixOffset;
@property (nonatomic) double lastRequestTime;
@property (retain, nonatomic) NSMutableDictionary *reportedAwemeIDs;
@property (nonatomic) BOOL isSubTab;
@property (retain, nonatomic) IESGCPPBGameFeedTabInfo *defaultRequestTabInfo;
@property (nonatomic) BOOL firstPageLoad;
@property (nonatomic) long long viewStyle;
@property (nonatomic) BOOL isFromTabStrategy;
@property (nonatomic) BOOL isLiveScene;
@property (retain, nonatomic) NSNumber *refreshFooterState;
@property (nonatomic) BOOL needShowLoading;
@property (nonatomic) BOOL needShowNetworkError;
@property (nonatomic) BOOL hasMoreData;
@property (nonatomic) BOOL needHideTab;
@property (nonatomic) BOOL isChangeTab;
@property (copy, nonatomic) NSString *mainTab;
@property (retain, nonatomic) NSNumber *netEndTime;
@property (retain, nonatomic) NSNumber *dataPrepareTime;
@property (copy, nonatomic) NSString *gameId;
@property (retain, nonatomic) IESGCPPBGameFeedTabInfo *currentTabInfo;
@property (retain, nonatomic) IESGCPPBGameFeedTabInfo *currentSubTabInfo;
@property (copy, nonatomic) id /* block */ reloadListDataComplete;
@property (copy, nonatomic) id /* block */ reloadTopTabsComplete;
@property (copy, nonatomic) id /* block */ reloadSubTabsComplete;
@property (retain, nonatomic) NSMutableArray *strategyArray;
@property (retain, nonatomic) NSArray *tabInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGameId:(id)a0 isLiveScene:(BOOL)a1;
- (void)setupDefaultReqeustTabId:(id)a0;
- (unsigned long long)defaultSelectedTabIndex;
- (void)requestImpressionReportWithGCPAwemeModel:(id)a0 playTime:(double)a1;
- (void)requestStrategyListWithComplete:(id /* block */)a0;
- (void)requestStrategyListWithFirstPageLoad:(BOOL)a0;
- (void)requestMixStrategyListIfNeed:(long long)a0;
- (id)tabWords;
- (id)subTabWords;
- (unsigned long long)defaultSelectedSubTabIndex;
- (void)switchTabInfo:(id)a0 isSubTab:(BOOL)a1;
- (void)requestStrategyListWithTabInfo:(id)a0 isSubTab:(BOOL)a1 count:(long long)a2 complete:(id /* block */)a3;
- (void)trackRequestStrategyListStartEventWithTabId:(id)a0 isChoicenessContent:(BOOL)a1;
- (void)trackRequestStrategyListResultEventWithTabId:(id)a0 isChoicenessContent:(BOOL)a1 reponse:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (BOOL)isMute;

@end
