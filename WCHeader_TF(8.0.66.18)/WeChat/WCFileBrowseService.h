@class NSMutableArray, NSString, WCFileBrowseInfoDB, WCFileBrowseKVLog, NSObject, WCFileBrowseBuildIndexOperation;
@protocol OS_dispatch_queue;

@interface WCFileBrowseService : MMUserService <IMsgExt, IFileDetailExt, WXGImportMessageNotification, MMServiceProtocol>

@property (retain, nonatomic) WCFileBrowseInfoDB *browseInfoDB;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileBrowseQueue;
@property (retain, nonatomic) WCFileBrowseBuildIndexOperation *buildIndexOperation;
@property (copy, nonatomic) NSString *currentSearchText;
@property (nonatomic) BOOL bOpen;
@property (retain, nonatomic) NSMutableArray *fileBrowseInfoArray;
@property (retain, nonatomic) NSMutableArray *fileBrowseInfoSectionArray;
@property (retain, nonatomic) NSMutableArray *favFileBrowseInfoArray;
@property (retain, nonatomic) NSMutableArray *favFileBrowseInfoSectionArray;
@property (retain, nonatomic) NSMutableArray *searchResultInfoSectionArray;
@property (nonatomic) BOOL bLoadingChatLogFile;
@property (nonatomic) BOOL bLoadingFavFile;
@property (retain, nonatomic) WCFileBrowseKVLog *kvLogObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_getFullDateStringOfTime:(unsigned int)a0;
+ (id)p_getFileBrowseInfoSectionArray:(id)a0;

- (void)onServiceInit;
- (void)reloadInfo;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)startBuildIndexOperation;
- (void)existFileBrowser;
- (id)getFileBrowseSectionTitleForSection:(unsigned long long)a0 withDataType:(unsigned long long)a1;
- (id)getFileBrowseSectionTitleForSection:(unsigned long long)a0 withDataType:(unsigned long long)a1 andChatName:(id)a2;
- (unsigned long long)getFileBrowseInfoCountInSection:(unsigned long long)a0 withDataType:(unsigned long long)a1;
- (unsigned long long)getFileBrowseInfoCountInSection:(unsigned long long)a0 withDataType:(unsigned long long)a1 andChatName:(id)a2;
- (unsigned long long)getFileBrowseSectionCountWithDataType:(unsigned long long)a0;
- (unsigned long long)getFileBrowseSectionCountWithDataType:(unsigned long long)a0 andChatName:(id)a1;
- (id)getFileBrowseInfoInIndex:(id)a0 withDataType:(unsigned long long)a1;
- (id)getFileBrowseInfoInIndex:(id)a0 withDataType:(unsigned long long)a1 andChatName:(id)a2;
- (void)checkLoadData:(id)a0;
- (void)checkLoadFavData;
- (void)OnSearch:(id)a0;
- (id)getAllFilesBrowseInfo;
- (id)getSearchText;
- (void)doSearch:(id)a0 withDataType:(unsigned long long)a1;
- (id)getSearchFileBrowseSectionTitleForSection:(unsigned long long)a0;
- (unsigned long long)getSearchFileBrowseInfoCountInSection:(unsigned long long)a0;
- (unsigned long long)getSearchFileBrowseSectionCount;
- (id)getSearchFileBrowseInfoInIndex:(id)a0;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)p_tryAddBrowseInfo:(id)a0 MsgWrap:(id)a1;
- (void)onImportMessageSuccess;
- (void)onImportingMessage;
- (id)getOneFileInfoOfMD5:(id)a0 retSameMD5FilePath:(id *)a1;
- (void)onFileDetailViewOpenMsgSvrID:(long long)a0;
- (void)makeWholeNewKVLog;
- (id)getCurrentKVLog;
- (void)reportCurrentKVLog;
- (void)setFirstScreenAssetNum:(unsigned int)a0 andFirstAssetIndex:(int)a1;
- (void)setReportKVLog:(unsigned long long)a0 withBrowseInfoArray:(id)a1;
- (void)report21059:(id)a0;
- (void).cxx_destruct;

@end
