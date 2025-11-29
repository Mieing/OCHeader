@class NSString;

@interface RTVStickerPanelDefaultDataController : RTVStickerPanelBaseDataController <RTVStickerManagerObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)stickerManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (BOOL)__stickerHadDownloaded:(id)a0;
- (void)stickerManager:(id)a0 didBegindownloadSticker:(id)a1;
- (void)stickerManager:(id)a0 didFailDownloadSticker:(id)a1 error:(id)a2;
- (void)stickerManager:(id)a0 downloadSticker:(id)a1 progressUpdate:(double)a2;
- (id)createViewModelWithSticker:(id)a0;
- (id)shouldSelectSticker:(id)a0;

@end
