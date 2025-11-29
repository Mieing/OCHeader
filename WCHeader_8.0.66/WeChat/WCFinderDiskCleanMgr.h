@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray;

@interface WCFinderDiskCleanMgr : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *sceneChainArrayContainer;
@property (retain, nonatomic) NSMutableDictionary *feedTagInfoDic;
@property (retain, nonatomic) NSMutableDictionary *cleanedFeedInfoDic;
@property (nonatomic) long long lastCleanTs;
@property (retain, nonatomic) NSMutableSet *deletedByDBFeedsSet;
@property (nonatomic) unsigned long long cleanActionState;
@property (nonatomic) long long lastTLWarningCleanTs;
@property (nonatomic) long long lastExitShareListCleanTs;
@property (nonatomic) long long lastBaseServiceCleanTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sceneChainArrayContainer;
+ (void)PBArrayAdd_feedTagInfoDic;
+ (void)PBArrayAdd_cleanedFeedInfoDic;
+ (void)PBArrayAdd_deletedByDBFeedsSet;
+ (void)PBArrayAdd_lastCleanTs;
+ (void)PBArrayAdd_lastTLWarningCleanTs;
+ (void)PBArrayAdd_lastExitShareListCleanTs;
+ (void)PBArrayAdd_lastBaseServiceCleanTs;
+ (void)initialize;
+ (id)sharedDiskReportQueue;
+ (id)buildFeedMarkModel:(id)a0;
+ (id)buildSceneMarkModel:(int)a0 fromVC:(id)a1 fromCell:(id)a2 playerView:(id)a3;

- (id)getPBPropertyTable;
- (id)init;
- (void)syncToLocal;
- (void)_syncToLocal;
- (void)_checkFeedCleanEffectBy:(id)a0;
- (void)feedWillPlay:(id)a0 commentScene:(int)a1 fromVC:(id)a2 fromCell:(id)a3 playerView:(id)a4;
- (void)createNewSceneChainArray;
- (void)removeEmptySceneChainArray;
- (void)cleanSceneChainArrayContainer;
- (void)markTargetFeedId:(id)a0 actionFlag:(unsigned long long)a1;
- (BOOL)freeSizeIsMoreThanStandardLine;
- (void)triggerDiskCleanByScene:(unsigned long long)a0;
- (long long)triggerCoreServiceDiskCleanForSize:(long long)a0;
- (id)markWillCleanFeedInfoForReport:(id)a0;
- (BOOL)shouldCleanFeedMediaAsDBDeleteAction;
- (void)deleteTargetFeedMediaArray:(id)a0;
- (void)_triggerDBDeletedFeedMediaCleanAction;
- (long long)triggerCleanAndReportBy:(id)a0 targetSize:(long long)a1 diskCategory:(unsigned long long)a2 scene:(unsigned long long)a3;
- (long long)_triggerTLDiskCleanActionByScene:(unsigned long long)a0 targetSize:(long long)a1;
- (void)cleanExpiredCleanedFeedInfo;
- (id)_filterSceneMarkModelFeedsBy:(id)a0;
- (void)_checkRepeatPlayFeedReport:(id)a0 commentScene:(int)a1;
- (void)cancelCleanDiskAction;
- (void).cxx_destruct;

@end
