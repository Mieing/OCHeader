@class IESLiveNewDressContext;

@interface IESLiveNewDressMonitor : NSObject

@property (retain, nonatomic) IESLiveNewDressContext *context;

- (void)monitorGetDressWithDressID:(id)a0 version:(id)a1 error:(id)a2 duration:(double)a3 inSyncMode:(BOOL)a4;
- (void)monitorFetchDressListWithVersion:(id)a0 dressIDs:(id)a1 error:(id)a2 response:(id)a3 duration:(double)a4;
- (long long)prefetchErrorCodeFromError:(id)a0;
- (long long)getErrorCodeFromError:(id)a0;
- (void)monitorPrefetchWithDressID:(id)a0 dress:(id)a1 source:(long long)a2 duration:(double)a3 error:(id)a4;
- (void)monitorGetDressResourceWithDressID:(id)a0 dressType:(int)a1 isComplete:(BOOL)a2 error:(id)a3;
- (void).cxx_destruct;

@end
