@class NSString, BDPODRXFileBasicModel, NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface BDPODRResourceDownloader : NSObject <BDPODRXResolveDelegate>

@property (retain, nonatomic) BDPODRXFileBasicModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceSerialQueue;
@property (retain, nonatomic) NSMutableData *resourceData;
@property (retain, nonatomic) NSString *resourceXzPath;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) double downloadBeginTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDownloadResources;
- (void)_trackDownLoadStartEvent;
- (void)_trackDownLoadResultEvent:(id)a0;
- (long long)httpRangeOffset;
- (void)ttpkgDownloadTaskWillBegin:(id)a0;
- (void)pkgDownloadTask:(id)a0 receivedData:(id)a1 totalBytes:(long long)a2 httpStatus:(unsigned long long)a3 error:(id)a4;
- (void)pkgDownloadTask:(id)a0 didFinishWithResult:(id)a1;
- (void)pkgDownloadTask:(id)a0 didCancelWithResult:(id)a1;
- (id)handleFilterRequestURLs:(id)a0;
- (id)initWithModel:(id)a0 xzPath:(id)a1;
- (void)startDownloadResourcesWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)stopDownload;

@end
