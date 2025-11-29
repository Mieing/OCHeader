@class SAMIVoiceConversionFetcher, NSString, SAMIVCPerfomanceData, SAMIVoiceConversionUploader, NSDictionary, AWEResourceUploadParametersResponseModel, SAMIVoiceConversionExporter, NSMutableArray, SAMIVoiceConversionDownloader, NSNumber;

@interface SAMIVoiceConversionTask : NSObject <SAMIVoiceConversionExporterDelegate, SAMIVoiceConversionUploaderDelegate, SAMIVoiceConversionFetcherDelegate, SAMIVoiceConversionDownloaderDelegate>

@property (retain, nonatomic) NSNumber *taskID;
@property (retain, nonatomic) NSString *speakerID;
@property (nonatomic) unsigned long long processPhase;
@property (copy, nonatomic) id /* block */ taskCompletion;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) NSMutableArray *subTasks;
@property (retain, nonatomic) NSMutableArray *results;
@property (copy, nonatomic) NSString *rootPath;
@property (retain, nonatomic) SAMIVoiceConversionExporter *exporter;
@property (retain, nonatomic) SAMIVoiceConversionUploader *uploader;
@property (retain, nonatomic) SAMIVoiceConversionFetcher *fetcher;
@property (retain, nonatomic) SAMIVoiceConversionDownloader *downloader;
@property (retain, nonatomic) SAMIVCPerfomanceData *performanceData;
@property (readonly, nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL forceExcute;
@property (nonatomic) unsigned long long retryTimes;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (copy, nonatomic) NSDictionary *uploadAuthParams;
@property (copy, nonatomic) NSString *appKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prelaunchCacheDirPath:(id)a0;

- (id)multiVideoAssets:(id)a0 rangeInfo:(id)a1 speakerID:(id)a2 phase:(unsigned long long)a3 initBlock:(id /* block */)a4 progressBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (BOOL)assetsHasLocalCache:(id)a0 rangeInfo:(id)a1 speakerID:(id)a2;
- (void)vcDownloaderDidDownloadTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (void)vcExporterDidExportTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (void)vcFetcherDidFetchTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (id)generalMultiTaskID:(id)a0 rangeInfo:(id)a1 speakerID:(id)a2;
- (void)processTasksComplete:(id)a0;
- (id)cleanUpResource;
- (void)processTasksError:(id)a0 error:(id)a1 phase:(unsigned long long)a2;
- (void)finishWithResult:(id)a0 taskID:(id)a1 speakerID:(id)a2;
- (void)finishWithError:(id)a0 taskID:(id)a1 speakerID:(id)a2 errorPhase:(unsigned long long)a3;
- (void)vcUploaderDidUploadTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (void).cxx_destruct;
- (id)cancelTask;
- (id)initWithCacheDirPath:(id)a0;

@end
