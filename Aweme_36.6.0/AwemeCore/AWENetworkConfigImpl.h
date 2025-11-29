@class NSString;

@interface AWENetworkConfigImpl : HTSService <AWENetworkConfigProtocol, HTSService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonParamsWithoutL0;
+ (id)currentUserId;
+ (id)commonParamsWithURLString:(id)a0;
+ (BOOL)optRemoveNetworkCache;
+ (double)downloadCacheLifeTimeMax;
+ (BOOL)enableRenameForMove;
+ (BOOL)enableSyncGetAC;
+ (BOOL)jsonSerializationErrorMonitorEnable;
+ (BOOL)enableRegulateDownloadQueuePriority;
+ (BOOL)enableBackgroundDownload;
+ (BOOL)enableSliceDownload;
+ (id)repeatSetBodyOptConfig;
+ (Class)aAWENetworkBusinessServiceDOUYINSSAdapterClass;

- (id)commonParams;
- (BOOL)createTempFile;
- (BOOL)inOneLoop;
- (void)checkAntiSpamStateWithError:(id)a0 urlString:(id)a1 completion:(id /* block */)a2;
- (BOOL)userIsLogin;
- (id)aAWENetworkBusinessServiceDOUYINSSAdapter;
- (double)defaultTimeoutInterval;

@end
