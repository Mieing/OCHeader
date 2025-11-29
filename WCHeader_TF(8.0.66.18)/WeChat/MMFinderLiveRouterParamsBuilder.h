@class MMFinderLiveRouterParams;

@interface MMFinderLiveRouterParamsBuilder : NSObject

@property (retain, nonatomic) MMFinderLiveRouterParams *params;

- (id)init;
- (id /* block */)fromVC;
- (id /* block */)contactVM;
- (id /* block */)allContentVMs;
- (id /* block */)tabType;
- (id /* block */)customParams;
- (id /* block */)commentScene;
- (id /* block */)entryScene;
- (id /* block */)entryCardType;
- (id /* block */)selectIndex;
- (id /* block */)fromNotFinder;
- (id /* block */)exportIds;
- (id /* block */)relatedLiveParams;
- (id /* block */)liveAdsParams;
- (id /* block */)replayEntryType;
- (id /* block */)feedID;
- (id /* block */)gameClientParams;
- (id /* block */)pivotFlowData;
- (id /* block */)disableInteractiveToMinimizeWindow;
- (id /* block */)useAnchoredBypass;
- (id /* block */)disableHistoryLives;
- (id /* block */)useVerticalFullscreenMinimization;
- (id /* block */)build;
- (void).cxx_destruct;

@end
