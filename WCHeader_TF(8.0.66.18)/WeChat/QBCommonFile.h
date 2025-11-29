@class NSObject, NSMutableDictionary, QBASINetworkQueue;
@protocol OS_dispatch_queue;

@interface QBCommonFile : NSObject

@property (retain, nonatomic) NSMutableDictionary *fileListInfoDic;
@property (retain, nonatomic) NSMutableDictionary *fileObserverInfo;
@property (retain) QBASINetworkQueue *networkQueue;
@property (nonatomic) long long fileCountForDownload;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;
+ (void)downloadFilesWithModuleName:(id)a0;
+ (void)listenOnUpdateForFile:(id)a0 withNotificationName:(id)a1 target:(id)a2 selector:(SEL)a3;
+ (BOOL)shouldDownloadFiles;
+ (id)md5WithModuleName:(id)a0;

- (id)init;
- (BOOL)saveFileListInfo;
- (void)saveCommonFilesWithRsp:(id)a0;
- (id)fileInfoArrayWithModuleName:(id)a0;
- (id)filePathWithName:(id)a0;
- (id)fileInfoSnapshot;
- (BOOL)saveFileInfoSnapshot:(id)a0;
- (void)downloadCommonFiles;
- (void)removeSnapshotWithFileName:(id)a0;
- (id)md5ForData:(id)a0;
- (void)filesDownloadDidFinished;
- (void)notifyTheObserverWithFileName:(id)a0;
- (void)commonFileGetComplete:(id)a0;
- (void)commonFileGetFailed:(id)a0;
- (void).cxx_destruct;

@end
