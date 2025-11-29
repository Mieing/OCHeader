@class NSString, NSBundleResourceRequest, BDPODRPluginFileBasicModel, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDPODRPluginCodeDownloader : NSObject

@property (retain, nonatomic) NSString *odrCodesTag;
@property (retain, nonatomic) NSString *odrCodesMD5;
@property (nonatomic) long long odrCodesLength;
@property (retain, nonatomic) NSString *codesXzPath;
@property (retain, nonatomic) NSString *decompressPath;
@property (retain, nonatomic) BDPODRPluginFileBasicModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *codeSerialQueue;
@property (retain, nonatomic) NSBundleResourceRequest *bundleRequset;
@property (retain, nonatomic) NSMutableArray *completionArr;
@property (nonatomic) double downloadBeginTimeStamp;
@property (nonatomic) BOOL requesting;

+ (id)downloaderWithModel:(id)a0 codesXzPath:(id)a1 decompressPath:(id)a2;

- (void)removeBundleRequest;
- (void)_downloadODRCodeWithTryCount:(long long)a0;
- (void)removeBundleRequestObserver;
- (void)_decompressToDestWithError:(id *)a0;
- (void)_executeAllCompletions:(id)a0;
- (void)_downloadODRCodeIfNeed;
- (void)_trackDownloadStartEventWithODRFrom:(id)a0;
- (long long)_decompressCodeWithError:(id *)a0;
- (void)_trackDownloadResultEvent:(id)a0 odrCodesTag:(id)a1 downloadDataLength:(long long)a2 odrFrom:(id)a3;
- (void)startDownloadModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopDownload;

@end
