@class NSString, NSMutableDictionary;

@interface CdnServiceDownloadMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicDownloadArgsWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)startDownloadWithArgsWrap:(id)a0;
- (BOOL)isTaskRunning:(id)a0;
- (id)stopDownloadWithFileKey:(id)a0;
- (void)stopDownloadWithAggregateName:(id)a0;
- (BOOL)checkCache:(id)a0;
- (BOOL)startTask:(id)a0;
- (void)onDownloadError:(id)a0 argsWrap:(id)a1;
- (void)onDownloadSuccess:(id)a0 argsWrap:(id)a1;
- (void).cxx_destruct;

@end
