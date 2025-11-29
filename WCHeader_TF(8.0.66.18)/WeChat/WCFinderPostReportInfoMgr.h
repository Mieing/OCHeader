@class OMJAssetInfoStatistics, NSMutableDictionary, NSMutableSet;

@interface WCFinderPostReportInfoMgr : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyContainerDic;
@property (retain, nonatomic) NSMutableDictionary *reportDic;
@property (retain, nonatomic) NSMutableSet *currentLoadingModules;
@property (retain, nonatomic) NSMutableSet *startLoadingIdSet;
@property (retain, nonatomic) NSMutableSet *stopLoadingIdSet;
@property (retain, nonatomic) OMJAssetInfoStatistics *assetInfoCollector;

- (void)uniqueMarkStartLoadingAtPageName:(id)a0 moduleName:(id)a1 identification:(id)a2;
- (void)uniqueMarkEndLoadingAtPageName:(id)a0 moduleName:(id)a1 identification:(id)a2 endReasonType:(unsigned long long)a3;
- (void)uniqueMarkStartLoadingAsModule:(id)a0 identification:(id)a1;
- (void)uniqueMarkEndLoadingAsModule:(id)a0 identification:(id)a1 endReasonType:(unsigned long long)a2;
- (void)collectAssetsWithPaths:(id)a0 fromScene:(unsigned long long)a1 isFinal:(BOOL)a2;
- (void)removeAssetsFromScene:(unsigned long long)a0;
- (void)clearAllCollectedAssets;
- (id)getAllCollectedAssetsData;
- (id)init;
- (void)markStartLoadingAtPageName:(id)a0 moduleName:(id)a1 identification:(id)a2;
- (void)markEndLoadingAtPageName:(id)a0 moduleName:(id)a1 identification:(id)a2 endReasonType:(unsigned long long)a3;
- (void)markStartLoadingAsModule:(id)a0 identification:(id)a1;
- (void)markEndLoadingAsModule:(id)a0 identification:(id)a1 endReasonType:(unsigned long long)a2;
- (void)_markStartLoadingWithModel:(id)a0;
- (void)_markEndLoadingAtPageName:(id)a0 moduleName:(id)a1 identification:(id)a2 endReasonType:(unsigned long long)a3;
- (void)cleanReportInfo;
- (id)genReportInfo;
- (void)markPagePostSession:(id)a0;
- (void)cleanPostSession;
- (void)checkAndReportPostSession;
- (void).cxx_destruct;

@end
