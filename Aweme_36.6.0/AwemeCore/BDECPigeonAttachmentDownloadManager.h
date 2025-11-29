@class BDECPigeonKVStore, NSMutableDictionary, TTDownloadManager, TTDownloadApi;

@interface BDECPigeonAttachmentDownloadManager : NSObject

@property (retain, nonatomic) TTDownloadApi *downloadApi;
@property (retain, nonatomic) TTDownloadManager *downloadManager;
@property (retain, nonatomic) BDECPigeonKVStore *kvStore;
@property (retain, nonatomic) NSMutableDictionary *taskKeyToDownloadFilePathDict;
@property (retain, nonatomic) NSMutableDictionary *taskKeyToResumeDownloadURLDict;
@property (retain, nonatomic) NSMutableDictionary *taskKeyToContinueDownloadCallbackDict;

+ (id)shared;

- (id)downloadFilePathWithRelativeFilePath:(id)a0;
- (void)handleDownloadResult:(id)a0 key:(id)a1;
- (void)handleDeleteDownloadSuccessWithKey:(id)a0;
- (long long)startDownloadWithKey:(id)a0 fileName:(id)a1 md5Value:(id)a2 urlList:(id)a3 progress:(id /* block */)a4 status:(id /* block */)a5;
- (long long)resumeDownloadWithKey:(id)a0 urlList:(id)a1 progress:(id /* block */)a2 status:(id /* block */)a3;
- (void)cancelDownloadWithKey:(id)a0 completion:(id /* block */)a1;
- (void)deleteDownloadWithKey:(id)a0 resultBlock:(id /* block */)a1;
- (id)downloadFilePathWithKey:(id)a0;
- (id)resumeDownloadURLWithKey:(id)a0;
- (BOOL)fileOpenExternalWithPath:(id)a0 fileType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearWithCompletion:(id /* block */)a0;

@end
