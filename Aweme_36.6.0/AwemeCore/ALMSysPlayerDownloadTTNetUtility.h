@class TTHttpTask, AWEVideoCacheRequestTask, NSString;

@interface ALMSysPlayerDownloadTTNetUtility : NSObject <AWEVideoDownloadNetworkUtility>

@property (retain, nonatomic) TTHttpTask *runningTask;
@property (weak, nonatomic) AWEVideoCacheRequestTask *cacheRequestTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithTask:(id)a0;

@end
