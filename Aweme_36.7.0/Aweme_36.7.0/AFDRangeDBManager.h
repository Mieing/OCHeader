@class NSMutableDictionary, NSString, WCTDatabase, NSMutableArray;

@interface AFDRangeDBManager : NSObject <AWEUserMessage, AWEAppAwemeSettingMessage, AFDRangeABTestManagerProtocol>

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) NSMutableDictionary *cacheDic;
@property (nonatomic) BOOL needAppend;
@property (retain, nonatomic) NSMutableArray *failedModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)awemeSettingDidChange;
- (void)insertOrReplaceModel:(id)a0 completion:(id /* block */)a1;
- (id)getModelWhereDateIn7Days:(id)a0;
- (id)currentServerDate;
- (id)getTodayModel;
- (void)deleteModels;
- (void)prepareDatabase;
- (id)wcdbFilePath;
- (BOOL)createTableWithError:(id *)a0;
- (BOOL)isCorrupted:(id)a0;
- (void)deleteAllModels;
- (void)prepareOldDataAndAppendNewDate;
- (void)coldLaunchAppendLabelDate;
- (void)dispatchAsyncWhenReadWrite:(id /* block */)a0;
- (void)log:(BOOL)a0 operation:(id)a1;
- (void)prepareTable;
- (long long)cacheDicSize;
- (void)updateCacheDic:(id)a0;
- (int)p_dateToInt:(id)a0;
- (id)propertyDicToModel:(id)a0 labelDate:(id)a1;
- (id)p_intTodate:(long long)a0;
- (void)deleteCacheDic;
- (void)insertOrReplaceModels:(id)a0 needUpdateCacheDic:(BOOL)a1 completion:(id /* block */)a2;
- (id)getAllModels;
- (id)getCacheDic;
- (void)deleteCacheDicStorage;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
