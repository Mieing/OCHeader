@class NSString, NSMutableDictionary, NSMutableArray;

@interface WCFinderVideoUploadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>

@property (retain, nonatomic) NSMutableDictionary *uploadDict;
@property (retain, nonatomic) NSMutableArray *uploadWaitingArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (void)startUploadvideoPath:(id)a0 thumbPath:(id)a1 requestHeader:(id)a2 progressBlock:(id /* block */)a3 complecteBlock:(id /* block */)a4;
- (void)startUploadAudioPath:(id)a0 requestHeader:(id)a1 progressBlock:(id /* block */)a2 complecteBlock:(id /* block */)a3;
- (BOOL)startUploadTingAudioRecordPath:(id)a0 requestHeader:(id)a1 progressBlock:(id /* block */)a2 complecteBlock:(id /* block */)a3;
- (void)cancelUploadvideoPath:(id)a0;
- (void)checkQueue;
- (void)realUploadVideoWithMeta:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
