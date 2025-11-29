@class WCPlayerCertificateMgr, NSString, AVAssetResourceLoadingRequest, WCPlayerReporter, WCPlayerFairPlayInfo, AVURLAsset;
@protocol WCPlayerFairPlayResourceLoaderDelegate;

@interface WCPlayerFairPlayResourceLoader : NSObject <AVAssetResourceLoaderDelegate>

@property (retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest;
@property (retain, nonatomic) WCPlayerFairPlayInfo *fairPlayInfo;
@property (retain, nonatomic) WCPlayerCertificateMgr *certificateMgr;
@property (retain, nonatomic) WCPlayerReporter *reporter;
@property (retain, nonatomic) AVURLAsset *asset;
@property (weak, nonatomic) id<WCPlayerFairPlayResourceLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCertificate:(id)a0;
- (void)updateFairPlayInfo:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)requestContentKeyWithSPCData:(id)a0 assetIDData:(id)a1;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (void).cxx_destruct;

@end
