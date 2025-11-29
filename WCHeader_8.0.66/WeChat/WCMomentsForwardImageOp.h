@interface WCMomentsForwardImageOp : WCMomentsForwardBaseOp <WCFacadeExt>

- (BOOL)startForwardToCustomContact:(id)a0;
- (void)updateMessageWrap;
- (void)subscribeImageDownload;
- (void)startDownloadImage;
- (id)getImageFromCache:(id)a0;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (void)OnForwardMessageFailUpdate:(id)a0;

@end
