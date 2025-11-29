@class AWEIMFTSKeywordProcessor, NSString, AWEIMFTSDataSyncManager, AWEIMFTSComplexDataCache, NSMutableDictionary, NSArray, NSObject, AWEIMFTSMultiRecallRequest;
@protocol IESIMFTSDataServiceProtocol, AWEIMFTSTrackProtocol, OS_dispatch_semaphore, OS_dispatch_queue, AWEIMFTSDataSourceProtocol;

@interface AWEIMFTSManager : NSObject <IESIMFTSInterface>

@property (retain, nonatomic) NSMutableDictionary *openedDataServices;
@property (nonatomic) BOOL clearingFTSDB;
@property (nonatomic) BOOL settingUpFTSDB;
@property (nonatomic) BOOL needResetUpFTSDB;
@property (nonatomic) BOOL setUpFTSDBFinished;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *ftsDBSemaphore;
@property (retain, nonatomic) AWEIMFTSDataSyncManager *dataSyncManager;
@property (retain, nonatomic) id<IESIMFTSDataServiceProtocol> dataService;
@property (retain, nonatomic) AWEIMFTSComplexDataCache *dataCache;
@property (retain, nonatomic) id<AWEIMFTSTrackProtocol> trackCenter;
@property (retain, nonatomic) AWEIMFTSKeywordProcessor *keywordProcessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (copy) NSString *searchId;
@property (retain) AWEIMFTSMultiRecallRequest *multiRecallRequest;
@property (retain, nonatomic) id<AWEIMFTSDataSourceProtocol> userDataSource;
@property (retain, nonatomic) id<AWEIMFTSDataSourceProtocol> messageDataSource;
@property (retain, nonatomic) id<AWEIMFTSDataSourceProtocol> participantDataSource;
@property (retain, nonatomic) id<AWEIMFTSDataSourceProtocol> conversationDataSource;
@property (copy, nonatomic) NSArray *assistantParticipantDataSourceArr;
@property (copy, nonatomic) NSArray *assistantConversationDataSourceArr;
@property (retain, nonatomic) id<AWEIMFTSDataSourceProtocol> officialChatDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAllBusTypes;
+ (id)getDefaultSortOrderDict;
+ (id)getMessageDataResult;
+ (id)getConversationDataResult;
+ (id)convertToResultDataWithData:(id)a0 dataType:(long long)a1;
+ (id)getUserDataResult;
+ (id)getOfficialChatResult;
+ (id)getMultiRecallConversationDataResult;
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
- (void)handleSetUpFTSDBFinishedNoti;
- (void)setupDataService;
- (void)setupDataServiceForCurrentUser;
- (id)generateFTSMessageSearchKeywords:(id)a0;
- (id)processFTSDatas:(id)a0 keyword:(id)a1;
- (id)processFTSDatas:(id)a0 keyword:(id)a1 config:(id)a2;
- (id)resultOfFTSData:(id)a0 dataType:(long long)a1 keyword:(id)a2;
- (id)resultOfFTSData:(id)a0 dataType:(long long)a1 keyword:(id)a2 config:(id)a3;
- (void)calculateDisplayInfoOfFTSData:(id)a0 keyword:(id)a1;
- (void)calculateDisplayInfoOfFTSData:(id)a0 keyword:(id)a1 config:(id)a2;
- (void)getMessageCountWithConfig:(id)a0 completion:(id /* block */)a1;
- (id)sortUserResultDatas:(id)a0 keyword:(id)a1;
- (void)removeDynamicUID;
- (void)createAssistantArr;
- (id)generateFTSSearchKeywords:(id)a0 withMonitorArray:(id)a1;
- (void)addSearchResultLogWithBusType:(long long)a0 datas:(id)a1 result:(id)a2 searchId:(id)a3;
- (id)getConversationDataResultWithConfig:(id)a0 keywords:(id)a1;
- (void)configMultiRecallResult:(id)a0 withFTSData:(id)a1 config:(id)a2;
- (void)configDataHighlightInfo:(id)a0 withHighlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchContent:(id)a2 keyword:(id)a3;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;

@end
