@class IESLivePCDNLaunchConfig, IESLiveEffectDownloadTrackHandler, NSString;
@protocol IESLivePCDNDownloadService;

@interface IESLiveEffectPCDNDownloader : NSObject <IESLiveEffectDownloadDelegate>

@property (retain, nonatomic) IESLivePCDNLaunchConfig *launchConfig;
@property (retain, nonatomic) id<IESLivePCDNDownloadService> pcdnDownloadService;
@property (retain, nonatomic) IESLiveEffectDownloadTrackHandler *trackHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadGiftWithURL:(id)a0 assetId:(id)a1 fileUniqId:(id)a2 progress:(id /* block */)a3 completed:(id /* block */)a4;
- (id)_downloadCacheURLStrWithAssetId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
