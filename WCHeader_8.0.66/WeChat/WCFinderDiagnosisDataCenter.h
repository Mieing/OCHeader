@class FinderJumpInfo, NSMutableDictionary, NSMutableSet;

@interface WCFinderDiagnosisDataCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *recardMap;
@property (retain, nonatomic) NSMutableSet *alreadyDisplayItems;
@property (retain, nonatomic) NSMutableDictionary *objectStatusMap;
@property (retain, nonatomic) FinderJumpInfo *cacheJumpInfoMayBeNull;

- (id)init;
- (void)queryDataForTidList:(id)a0;
- (void)update:(id)a0 forTid:(id)a1;
- (BOOL)shouldFetchDiagnosisData;
- (long long)fetchDiagnosisDataFlag;
- (id)displayItemForTid:(id)a0;
- (double)displayDuration;
- (BOOL)showAbnormalIcon:(id)a0;
- (void)markDiagnosisDataItemRead:(id)a0;
- (void)reportHitXLab;
- (BOOL)dataItemCouldShowCreaterEnterance:(id)a0;
- (id)creatorJumpInfoForContentVM:(id)a0;
- (void)reloadCacheCreatorJumpInfo;
- (void).cxx_destruct;

@end
