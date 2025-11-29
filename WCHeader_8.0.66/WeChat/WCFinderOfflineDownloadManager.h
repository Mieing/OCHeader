@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCFinderOfflineDownloadManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSArray *waitingList;
@property (retain, nonatomic) NSArray *downloadingList;
@property (nonatomic) unsigned long long downloadPhase;

- (id)init;
- (void)dealloc;
- (void)preloadOfflineVideos;
- (void)addDownloadTaskIfNeeded;
- (id)groupId;
- (void)cleanExpiredOfflineCache;
- (void)allDownloadTaskFinishedWithGroupID:(id)a0;
- (void).cxx_destruct;

@end
