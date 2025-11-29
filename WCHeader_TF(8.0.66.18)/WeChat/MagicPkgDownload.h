@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MagicPkgDownload : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_dicDownloadingItem;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)downloadMagicPkg:(id)a0 downloadType:(unsigned long long)a1;
- (void)UpdateFinish:(id)a0 pkgPath:(id)a1 unzipPath:(id)a2;
- (BOOL)unzipDownloadUpdates:(id)a0 unzipPath:(id)a1;
- (void).cxx_destruct;

@end
