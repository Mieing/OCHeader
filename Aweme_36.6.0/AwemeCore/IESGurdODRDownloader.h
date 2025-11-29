@class NSString, NSBundleResourceRequest, NSDate, NSObject, IESGurdResourceModel;
@protocol OS_dispatch_queue;

@interface IESGurdODRDownloader : NSObject

@property (retain, nonatomic) NSString *odrTag;
@property (retain, nonatomic) NSString *logStr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSBundleResourceRequest *bundleRequset;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IESGurdResourceModel *config;
@property (retain, nonatomic) NSDate *start;
@property (nonatomic) BOOL alreadyExist;

- (void)removeBundleRequestSync;
- (void)onCompletion:(id)a0 error:(id)a1;
- (void)removeBundleRequest;
- (void)_downloadODRCodeWithTryCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)startDownload:(id /* block */)a0;

@end
