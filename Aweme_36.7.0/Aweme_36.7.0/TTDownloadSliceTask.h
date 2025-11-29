@class TTDownloadTask, NSString, DownloadGlobalParameters, TTDownloadSliceTaskConfig, TTDownloadSubSliceInfo;

@interface TTDownloadSliceTask : NSObject <SubTaskProtocol>

@property (readonly, copy) NSString *urlKey;
@property (readonly, copy) NSString *secondUrl;
@property (readonly, copy) NSString *sliceStorageDir;
@property BOOL isTaskValid;
@property (weak) TTDownloadTask *downloadTask;
@property (retain) TTDownloadSubSliceInfo *currSubSliceInfo;
@property (retain) DownloadGlobalParameters *userParameters;
@property (retain) TTDownloadSliceTaskConfig *downloadSliceTaskConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearReferenceCount;
- (void)trySwitchCdn;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end
