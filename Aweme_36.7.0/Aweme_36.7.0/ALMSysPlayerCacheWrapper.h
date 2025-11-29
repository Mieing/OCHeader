@class NSString;

@interface ALMSysPlayerCacheWrapper : NSObject <AWEVideoCDNRequestDelegate, AWEVideoDownloadDelegate, ALMVideoCacheProtocol>

@property (copy, nonatomic) id /* block */ requestBlock;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (copy, nonatomic) id /* block */ speedTestBlock;
@property (nonatomic) long long videoBSNetworkProfilerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)clearAllCache;
- (BOOL)hasEnoughCacheForURLString:(id)a0 videoDuration:(double)a1 networkSpeed:(double)a2;
- (void)videoWillRequest:(id)a0 isRedirectRequest:(BOOL)a1;
- (void)videoDidReceiveResponse:(id)a0 forRequest:(id)a1;
- (void)videoDidDownloadDataLength:(unsigned long long)a0 interval:(double)a1;
- (long long)getIESVideoBSNetworkProfilerType;
- (void)hasCacheForVideoID:(id)a0 URLString:(id)a1 completion:(id /* block */)a2;
- (void)getCacheSizeWithCompletion:(id /* block */)a0;
- (void)setVideoDownloadSpeedTestAction:(id /* block */)a0;
- (void)setIESVideoBSNetworkProfilerType:(long long)a0;
- (void)setCacheSizeLimit:(unsigned long long)a0;
- (void)setCacheKeyParserBlock:(id /* block */)a0;
- (void)setCacheReportBlock:(id /* block */)a0;
- (void)setPlayerDidStartRequestURLBlock:(id /* block */)a0;
- (void)setPlayerDidFinishRequestURLBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
