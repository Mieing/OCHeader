@class NSLock, NSMapTable, NSString;

@interface BrandCGIReportService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)sendCgiRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)cancelCgiRequest:(unsigned int)a0;
- (void)cancelAllRequest;
- (void)_addRequest:(id)a0 forEventID:(unsigned int)a1;
- (void)_removeRequestForEventID:(unsigned int)a0;
- (id)_removeAllRequest;
- (id)_requestForEventID:(unsigned int)a0;
- (void).cxx_destruct;

@end
