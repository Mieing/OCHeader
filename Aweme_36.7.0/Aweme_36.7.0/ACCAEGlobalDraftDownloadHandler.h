@class ACCCameraSubscription, NSMutableDictionary, NSString;

@interface ACCAEGlobalDraftDownloadHandler : NSObject <ACCAEGlobalDraftDownloadProtocol>

@property (retain, nonatomic) NSMutableDictionary *downloadStatusDic;
@property (retain, nonatomic) NSMutableDictionary *downloadResultDic;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDownloadGlobalDraftFileForFileTypes:(id)a0;
- (unsigned long long)downloadStatusForFileType:(unsigned long long)a0;
- (id)globalDraftResultForFileType:(unsigned long long)a0;
- (void)resetAllDownloadDic;
- (void)__startDownloadForFileType:(unsigned long long)a0 canUseCache:(BOOL)a1;
- (id)transferFileType:(unsigned long long)a0;
- (void)setDownloadStatus:(unsigned long long)a0 forFileType:(unsigned long long)a1;
- (void)notifyDidBeginDownloadForFileType:(unsigned long long)a0;
- (id)effectIDForFileType:(unsigned long long)a0;
- (void)setDownloadResult:(id)a0 forFileType:(unsigned long long)a1;
- (void)notifyDidFinishDownloadForFileType:(unsigned long long)a0;
- (void)notifyDidFailDownloadForFileType:(unsigned long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
