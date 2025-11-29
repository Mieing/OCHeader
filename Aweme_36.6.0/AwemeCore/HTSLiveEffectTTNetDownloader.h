@class NSString, IESLiveEffectDownloadTrackHandler;

@interface HTSLiveEffectTTNetDownloader : NSObject <IESLiveEffectDownloadDelegate>

@property (retain, nonatomic) IESLiveEffectDownloadTrackHandler *trackHandler;
@property (nonatomic) BOOL enableSpeedLimit;
@property (nonatomic) long long throttleNetSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downloadCacheURLWithAssetId:(id)a0;
- (void)downloadGiftWithURL:(id)a0 assetId:(id)a1 fileUniqId:(id)a2 progress:(id /* block */)a3 completed:(id /* block */)a4;
- (void).cxx_destruct;

@end
