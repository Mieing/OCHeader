@class NSString;

@interface AWEStreamEditDownloadManager : NSObject <AWEStreamEditDownloadManagerProtocol>

@property (nonatomic) long long downloaderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkAVURLAssetValidationWithPublishModel:(id)a0;
+ (void)replacePublishViewModelVideoInfoIfNeeded:(id)a0;
+ (BOOL)hasLocalAssetWithPublishModel:(id)a0;
+ (id)downloadWithURL:(id)a0 playerCacheInfo:(id)a1 enterFrom:(id)a2 fromShareInterface:(BOOL)a3;
+ (void)stopDownloadWithPublishModel:(id)a0;


@end
