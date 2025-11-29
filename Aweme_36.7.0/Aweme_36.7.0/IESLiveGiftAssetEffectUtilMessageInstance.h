@interface IESLiveGiftAssetEffectUtilMessageInstance : IESLiveGiftMessageInstance

@property (nonatomic) long long openAssetMaxRetryCount;

- (BOOL)messageEnable:(id)a0;
- (void)prepareDressAssetFromEffectUtilMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_checkOpenAssetImageResource:(id)a0;
- (void)didReceiveNewResource:(id)a0 resourceID:(id)a1 retryCount:(long long)a2;
- (void)monitor_openAssetDownloadWithStatus:(id)a0 assetID:(id)a1 source:(id)a2 duration:(id)a3 userID:(id)a4;
- (id)p_imagesFromPieces:(id)a0;
- (id)p_needLoadImageURLsWithImages:(id)a0;
- (void)p_loadImageWith:(id)a0 completion:(id /* block */)a1;
- (void)messageSectionDidLoad;
- (Class)currentObserveMessage;
- (BOOL)bussinessMessageFilter:(id)a0 retryCount:(long long)a1;
- (void)prepareBeforeEnqueueForMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)resourceIsReadyForMessage:(id)a0 retryCount:(long long)a1;
- (BOOL)needEnqueue:(id)a0;

@end
