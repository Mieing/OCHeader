@class MMLiteAppDownloadMgr, NSDictionary, NSString;

@interface LiteAppJsApiShareMediaToTimeline : LiteAppJsApi <MMLiteAppDownloadMgrDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr;
@property (retain, nonatomic) NSDictionary *tailInfo;
@property (nonatomic) BOOL isImage;
@property (nonatomic) BOOL useCDN;
@property (retain, nonatomic) NSString *thumbUri;
@property (retain, nonatomic) NSString *videoPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)getValidPath:(id)a0 isImage:(BOOL)a1;
- (id)loadFilePath:(id)a0 isImage:(BOOL)a1;
- (id)getFileDataFromCDN:(id)a0 url:(id)a1 isImage:(BOOL)a2;
- (void)shareMediaToTimeLine:(id)a0 withThumbPath:(id)a1;
- (id)genUploadTaskWithImagePath:(id)a0;
- (id)genUploadTaskWithVideoPath:(id)a0 withThumbPath:(id)a1;
- (void)shareVideoToTimeLineWithThumb:(id)a0;
- (void)onDownloadTaskCompletion:(id)a0 errType:(unsigned long long)a1 errCode:(int)a2;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void).cxx_destruct;

@end
