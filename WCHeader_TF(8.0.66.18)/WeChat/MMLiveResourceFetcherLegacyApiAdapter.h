@class MMLiveResourceFetcherRootFlowAction;

@interface MMLiveResourceFetcherLegacyApiAdapter : NSObject

@property (retain, nonatomic) MMLiveResourceFetcherRootFlowAction *rootAction;
@property (readonly, nonatomic) unsigned long long pendingTaskCount;

- (id)init;
- (void)start:(id)a0 fileMD5:(id)a1 enforceIntegrityCheck:(BOOL)a2 pathManager:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
