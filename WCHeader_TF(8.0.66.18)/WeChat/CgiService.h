@class NSMapTable, NSString, NSLock;

@interface CgiService : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (class, readonly, nonatomic) CgiService *sharedService;

@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleResultWithExpacedClass:(Class)a0 result:(id)a1 completion:(id /* block */)a2;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)_addEvent:(id)a0 forId:(unsigned int)a1;
- (void)_removeEventForId:(unsigned int)a0;
- (id)_removeAllRequest;
- (unsigned int)sendCgi:(unsigned int)a0 request:(id)a1 completion:(id /* block */)a2;
- (unsigned int)sendCgi:(id)a0 completion:(id /* block */)a1;
- (unsigned int)sendCgi:(unsigned int)a0 request:(id)a1 expectedResponseClass:(Class)a2 completion:(id /* block */)a3;
- (void)cancelCgiEvent:(unsigned int)a0;
- (void)invalidateAllEvent;
- (id)eventForId:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
