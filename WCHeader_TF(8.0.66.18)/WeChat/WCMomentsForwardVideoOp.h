@class NSString;
@protocol WCMomentsForwardVideoOpDelegate;

@interface WCMomentsForwardVideoOp : WCMomentsForwardBaseOp <WCPlayerDownloaderExt, MMAssetCompositeResultExt>

@property (nonatomic) BOOL isCompositeVideo;
@property (weak, nonatomic) id<WCMomentsForwardVideoOpDelegate> videoOpDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)startForwardToCustomContact:(id)a0;
- (BOOL)restartForward;
- (void)updateMessageWrap;
- (BOOL)handleForwardWithCompositeTask:(id)a0;
- (BOOL)startDownloadVideo;
- (void)subscribeVideoDownload;
- (void)subscribeVideoCompositeTask;
- (BOOL)isLegalSight;
- (unsigned long long)sightLegalityType;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)OnCdnDownloadError:(id)a0;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)compositeTaskDidStop:(id)a0 withResult:(id)a1 compositeSession:(id)a2;
- (void)compositeTaskDidBeCancelled:(id)a0;
- (void)OnForwardMessageFailUpdate:(id)a0;
- (void).cxx_destruct;

@end
