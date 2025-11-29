@class IESGCPPBGameFeedTabInfo, IESGCPPBGameDetailStrategy, NSTimer, NSArray, NSString, AWEGCPStrategyAPI, NSMutableArray;

@interface AWEGCPDetailStrategyViewModel : IESGCPDetailBaseViewModel

@property (nonatomic) long long viewStyle;
@property (retain, nonatomic) AWEGCPStrategyAPI *api;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) IESGCPPBGameDetailStrategy *strategyInfo;
@property (retain, nonatomic) IESGCPPBGameFeedTabInfo *currentTabInfo;
@property (nonatomic) BOOL needShowNetworkError;
@property (copy, nonatomic) id /* block */ reloadListBlock;
@property (copy, nonatomic) id /* block */ onUITrackingBlock;
@property (copy, nonatomic) NSArray *filterWords;
@property (retain, nonatomic) NSArray *tabInfos;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSMutableArray *strategyArray;
@property (readonly, nonatomic) long long defaultSelectedTabIndex;

- (id)titleName;
- (id)innerFlowTrackParams;
- (BOOL)isLiveScene;
- (void)routeToTabWithTabID:(id)a0 params:(id)a1;
- (BOOL)shouldHideFilterView;
- (BOOL)shouldJumpAllEnable;
- (void)switchWithTabInfo:(id)a0;
- (void)requestImpressionReportWithGCPAwemeModel:(id)a0 playTime:(double)a1;
- (void)routeToAllStrategyPageWithParams:(id)a0;
- (void)requestStrategyList;
- (void)onUITracking;
- (void)requestStrategyListWithTabInfo:(id)a0;
- (void)routeToStrategyDetailPage;
- (BOOL)shouldOpenStrategyDetailWithLynx;
- (void)openStrategyDetailLynxPage;
- (BOOL)shouldHideTab;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (void)dealloc;
- (id)id_p;
- (id)initWithViewStyle:(long long)a0;

@end
