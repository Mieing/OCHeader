@class AWEECOMIMFTSKeywordProcessor, NSMutableDictionary, NSString, AWEECOMIMFTSDataSyncManager, NSObject;
@protocol AWEECOMIMFTSDataSourceProtocol, AWEECOMIMFTSDataServiceProtocol, OS_dispatch_semaphore, OS_dispatch_queue;

@interface AWEECOMIMFTSManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *openedDataServices;
@property (nonatomic) BOOL clearingFTSDB;
@property (nonatomic) BOOL settingUpFTSDB;
@property (nonatomic) BOOL needResetUpFTSDB;
@property (nonatomic) BOOL setUpFTSDBFinished;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *ftsDBSemaphore;
@property (retain, nonatomic) AWEECOMIMFTSDataSyncManager *dataSyncManager;
@property (retain, nonatomic) id<AWEECOMIMFTSDataServiceProtocol> dataService;
@property (retain, nonatomic) AWEECOMIMFTSKeywordProcessor *keywordProcessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (copy) NSString *searchId;
@property (retain, nonatomic) id<AWEECOMIMFTSDataSourceProtocol> messageDataSource;
@property (retain, nonatomic) id<AWEECOMIMFTSDataSourceProtocol> conversationDataSource;

+ (id)getAllBusTypes;
+ (id)getDefaultSortOrderDict;
+ (id)getMessageDataResult;
+ (id)getConversationDataResult;
+ (id)convertToResultDataWithData:(id)a0 dataType:(long long)a1;
+ (id)getUserDataResult;
+ (id)getOfficialChatResult;
+ (id)sharedInstance;

- (void)setupForCurrentUser;
- (void)searchWithConfig:(id)a0 completion:(id /* block */)a1;
- (long long)getTotalMessageCount;
- (long long)getTotalDeletedMessageCount;
- (long long)getTotalUserCount;
- (long long)getTotalDeletedUserCount;
- (long long)getTotalConversationCount;
- (long long)getTotalDeletedConversationCount;
- (long long)getTotalParticipantCount;
- (long long)getTotalDeletedParticipantCount;
- (void)executeCheckpointWithCompletion:(id /* block */)a0;
- (BOOL)ftsTrackerOptEnable;
- (void)handleSetUpFTSDBFinishedNoti;
- (void)setupDataService;
- (void)setupDataServiceForCurrentUser;
- (void)ftsSearchWithKeyword:(id)a0 types:(id)a1 contentTypes:(id)a2 inConversation:(id)a3 limitPertType:(long long)a4 sortOrderDict:(id)a5 completion:(id /* block */)a6;
- (id)generateFTSSearchKeywords:(id)a0;
- (id)generateFTSMessageSearchKeywords:(id)a0;
- (id)processFTSDatas:(id)a0 keyword:(id)a1;
- (id)processFTSDatas:(id)a0 keyword:(id)a1 config:(id)a2;
- (id)resultOfFTSData:(id)a0 dataType:(long long)a1 keyword:(id)a2;
- (id)resultOfFTSData:(id)a0 dataType:(long long)a1 keyword:(id)a2 config:(id)a3;
- (void)calculateDisplayInfoOfFTSData:(id)a0 keyword:(id)a1;
- (void)calculateDisplayInfoOfFTSData:(id)a0 keyword:(id)a1 config:(id)a2;
- (void)searchAllWithKeyword:(id)a0 contentTypes:(id)a1 limitPertType:(long long)a2 completion:(id /* block */)a3;
- (void)searchWithKeyword:(id)a0 types:(id)a1 contentTypes:(id)a2 limitPertType:(long long)a3 completion:(id /* block */)a4;
- (void)searchWithKeyword:(id)a0 types:(id)a1 contentTypes:(id)a2 inConversation:(id)a3 limit:(long long)a4 completion:(id /* block */)a5;
- (void)getMessageCountWithConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;

@end
