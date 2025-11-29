@class NSMutableDictionary, IESWCDatabase, NSDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEFamiliarFeedDeduplicateManager : NSObject <AWEUserMessage, AWEFamiliarFeedDeduplicateManagerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeDiskQueue;
@property (retain, nonatomic) IESWCDatabase *database;
@property (retain, nonatomic) NSMutableDictionary *playRecordsMap;
@property (nonatomic) long long maxCacheSize;
@property (retain, nonatomic) NSDictionary *uniqueTypeMaxUploadSize;
@property (retain, nonatomic) NSMutableArray *storyRecords;
@property (retain, nonatomic) NSMutableDictionary *recordsInSession;
@property (nonatomic) BOOL wcdbToTwo;
@property (nonatomic) BOOL enableDeduplicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableRefactorFamiliarDeduplicate;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)recentGidListParam;
- (id)recentGidList;
- (id)recentCloseFriendsParam;
- (id)unreadGidsParamWithAwemeList:(id)a0 dataSourceDuplicateAwemeIDs:(id)a1;
- (id)addRecentDeduplicateParams;
- (BOOL)hasPlayedItem:(id)a0;
- (void)trackDeduplicateInClientWithEnterFrom:(id)a0 duplicateID:(id)a1 awemeType:(long long)a2;
- (void)recordPlayWithItem:(id)a0 enterFrom:(id)a1;
- (id)familiarContentFrom:(id)a0 awemeModel:(id)a1;
- (BOOL)hasPlayedItem:(id)a0 inTab:(id)a1;
- (BOOL)hasPlayedItemExcludingMainTabInSession:(id)a0;
- (BOOL)hasPlayedItemInSession:(id)a0 inTab:(id)a1;
- (BOOL)hasPlayedItemExcludingMainTab:(id)a0;
- (void)prepareDatabase;
- (id)wcdbFilePath;
- (BOOL)createTableWithError:(id *)a0;
- (id)recentStoriesParam;
- (void)trackFriendsTabRecentGidsInfo;
- (id)playedModelWithItemId:(id)a0;
- (void)setupDeduplicateDataBase;
- (void)updateConfigFromCloud;
- (void)loadValidRecordsFromDB;
- (void)initWCDBTwo;
- (void)initWCDBOne;
- (BOOL)isDatabaseCorrupted:(id)a0;
- (void)monitorDatabase:(id)a0 error:(id)a1;
- (BOOL)prepareDatabaseForWCDBTwo;
- (id)deduplicateTypeForAwemeModel:(id)a0;
- (id)recentPlayItemList;
- (id)uniqueTypeRecordsListStr:(id)a0;
- (BOOL)hasPlayedItemInSession:(id)a0;
- (void)recordPlayWithItemID:(id)a0 awemeType:(long long)a1 enterFrom:(id)a2;
- (void)trackForFriendDuplicateInFeedWithPage:(id)a0 itemID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (void)dealloc;
- (id)tableName;
- (void)removeAllRecords;

@end
