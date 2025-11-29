@class NSString, TPCertificateMgr, AVAssetResourceLoadingRequest;

@interface TPFairPlayMgr : NSObject <AVAssetResourceLoaderDelegate>

@property (retain, nonatomic) NSString *contentKeyUrl;
@property (retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest;
@property (retain, nonatomic) TPCertificateMgr *certificateMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
