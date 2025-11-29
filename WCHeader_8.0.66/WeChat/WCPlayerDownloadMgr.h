@class NSString, NSMutableDictionary;

@interface WCPlayerDownloadMgr : MMUserService <WCPlayerDownloadTaskInfoDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicTaskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerDownloadEventWithTaskIdentifier:(id)a0 taskId:(unsigned int)a1 progress:(id /* block */)a2 m3u8Ready:(id /* block */)a3 moovReady:(id /* block */)a4 complete:(id /* block */)a5;
- (void)registerDownloadEventWithTaskIdentifier:(id)a0 taskId:(unsigned int)a1 progress:(id /* block */)a2 m3u8Ready:(id /* block */)a3 moovReady:(id /* block */)a4 complete:(id /* block */)a5 isReuse:(BOOL)a6;
- (BOOL)StartDownloadWithTaskIdentifier:(id)a0 downloadType:(unsigned long long)a1 downloadMode:(int)a2 request:(id /* block */)a3;
- (BOOL)IsNeedCreateNewDownloadTaskWithTaskIdentifier:(id)a0 taskId:(unsigned int)a1;
- (BOOL)removeDownloadTaskWithTaskIdentifier:(id)a0 taskId:(unsigned int)a1;
- (void)CleanAllDownloadTaskInfoWithTaskIdentifier:(id)a0;
- (void)onDownloadTaskFinish:(id)a0;
- (void).cxx_destruct;

@end
