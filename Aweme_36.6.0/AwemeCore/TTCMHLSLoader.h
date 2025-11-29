@class NSString, TTCMPlaylistLoaderItem, AVMDLPreloadTaskSpec, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, TTCMHLSLoaderDelegate;

@interface TTCMHLSLoader : NSObject

@property (copy, nonatomic) NSString *playlistFileKey;
@property (copy, nonatomic) NSString *mCacheDir;
@property (nonatomic) unsigned long long targetPreloadSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) TTCMPlaylistLoaderItem *m3u8FileLoader;
@property (retain, nonatomic) NSMutableArray *mSubUrlInfos;
@property BOOL canceled;
@property (copy, nonatomic) NSString *currentLoadRawKey;
@property (copy, nonatomic) NSString *currentFileKey;
@property (nonatomic) unsigned long long preloadedSize;
@property (retain, nonatomic) AVMDLPreloadTaskSpec *mTaskSpec;
@property (nonatomic) unsigned long long playlistType;
@property (retain, nonatomic) TTCMHLSLoader *subLoader;
@property (weak, nonatomic) TTCMHLSLoader *parentLoader;
@property (weak, nonatomic) id<TTCMHLSLoaderDelegate> delegate;
@property (readonly, nonatomic) NSString *mProxyUrl;

+ (int)getErrorCode:(int)a0;

- (id)initWithTask:(id)a0 expireTimes:(id)a1;
- (void)startPreloadM3u8File:(id)a0;
- (void)preloadTs:(unsigned long long)a0;
- (id)getCacheDir;
- (void)doPreload;
- (id)initWithUrl:(id)a0 preloadSize:(unsigned long long)a1;
- (void)processSubPreloadStatus:(unsigned long long)a0 obj:(id)a1;
- (unsigned long long)getKeyType:(id)a0;
- (void)processSubPreloadStatus:(id)a0 status:(unsigned long long)a1 obj:(id)a2;
- (void)p_processSubPreloadStatus:(id)a0 status:(unsigned long long)a1 obj:(id)a2;
- (void)releaseSource;
- (void)handleMessage:(id)a0;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (int)preload;
- (void)cancel;

@end
