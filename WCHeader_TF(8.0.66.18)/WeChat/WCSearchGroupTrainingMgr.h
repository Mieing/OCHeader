@class NSRecursiveLock, NSMutableDictionary, WCSearchGroupTrainModel, WCTDatabase, WCTTable, WCSearchGroupScoreCache;

@interface WCSearchGroupTrainingMgr : NSObject <IFTSContactDataProviderExt, MMResourceMgrExt>

@property (retain, nonatomic) NSMutableDictionary *dicCache;
@property (retain, nonatomic) WCTDatabase *wctDB;
@property (retain, nonatomic) WCTTable *cTable;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) unsigned int dbCreateTime;
@property (retain, nonatomic) WCSearchGroupTrainModel *trainModel;
@property (retain, nonatomic) NSRecursiveLock *scoreLock;
@property (nonatomic) unsigned int scoreSeq;
@property (retain, nonatomic) WCSearchGroupScoreCache *scoreCache;
@property (nonatomic) BOOL isPreloadScoreFinish;
@property (nonatomic) BOOL hasDoContactReload;
@property (nonatomic) BOOL hasReportFirstPreload;

- (id)init;
- (void)dealloc;
- (id)getCTableDir;
- (BOOL)initDB;
- (void)cleanData;
- (BOOL)createCTable;
- (BOOL)updateInfo:(id)a0;
- (int)calDayOffset;
- (unsigned int)getRefTimeStamp;
- (id)getInfoForGroup:(id)a0;
- (void)addSearchCountForGroup:(id)a0;
- (unsigned int)getGroupClickCount:(id)a0 ForRecentDays:(unsigned int)a1;
- (unsigned int)getGroupClickDays:(id)a0 ForRecentDays:(unsigned int)a1;
- (unsigned int)getLastSearchTimeForGroup:(id)a0;
- (void)trimInvalid:(unsigned int)a0;
- (BOOL)recoverDB;
- (void)loadModelIfNeeded;
- (void)removeDownloadModel;
- (BOOL)isPreloadGroupTrainFinish;
- (BOOL)canPreload;
- (void)preloadGroupTrainFeatures;
- (id)safeGetScoreCached;
- (id)safeGetLeafCached;
- (id)safeGetFeatures;
- (double)safeGetScoreByFeature:(id)a0 gId:(id)a1 updateCache:(BOOL)a2;
- (double)runModelForOutLeafNodes:(id)a0 features:(id)a1;
- (id)getMaxSearchGroupFeature;
- (void)onContactReload;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void).cxx_destruct;

@end
