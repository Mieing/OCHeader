@class NSString, TTVideoEngineInfoFetcher;

@interface TTVideoFetcherWrapper : NSObject <TTVideoInfoFetcherDelegate>

@property (retain, nonatomic) TTVideoEngineInfoFetcher *fetcher;
@property (nonatomic) int resolution;
@property (nonatomic) void *context;
@property BOOL isLoading;
@property (nonatomic) struct { char *x0; char *x1; int x2; int x3; int x4; } *videoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)infoFetcherDidFinish:(long long)a0;
- (void)infoFetcherDidFinish:(id)a0 error:(id)a1;
- (void)infoFetcherShouldRetry:(id)a0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)a0;
- (id)initWithMetaURL:(id)a0 resolution:(int)a1;
- (int)getSupportedResolution:(id)a0;
- (void)setResolutionMask:(int *)a0 forResolution:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)cancel:(void *)a0;
- (void)dealloc;

@end
