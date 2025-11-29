@class NSString, NSMutableDictionary;
@protocol IESVideoPreloadProtocol;

@interface AWEVideoCDNRedirectTracker : NSObject <AWEVideoCDNRequestDelegate, AWEVideoCDNRedirectTrackerProtocol, IESVideoPreloadCDNInfoProtocol, ALMVideoPreloadCDNInfoProtocol> {
    id<IESVideoPreloadProtocol> _preloader;
}

@property (retain, nonatomic) NSMutableDictionary *CDNURLRecordsDictionary;
@property (retain, nonatomic) NSMutableDictionary *redirectURLDictionary;
@property (retain, nonatomic) NSMutableDictionary *videoItemIdURLListDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)localServerCDNLog:(id)a0;
- (void)videoWillRequest:(id)a0 isRedirectRequest:(BOOL)a1;
- (void)videoDidReceiveResponse:(id)a0 forRequest:(id)a1;
- (void)associatedVideoItemId:(id)a0 withURLArray:(id)a1;
- (void)initValues;
- (void)createCDNTrackerInfo:(id)a0 forRequest:(id)a1 responseDuration:(double)a2 requestTimestamp:(double)a3;
- (void)proactiveGetCDNLogByKey:(id)a0;
- (long long)getCDNHitCode:(id)a0;
- (void)getCDNRequestRecords:(id)a0 urlList:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
