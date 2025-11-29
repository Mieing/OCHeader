@class NSLock, NSMapTable, NSString;

@interface WACgiProxy : NSObject <PBMessageObserverDelegate, IWACgiService>

@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (unsigned int)sendCgi:(id)a0 completion:(id /* block */)a1;
+ (void)cancelCgiRequest:(unsigned int)a0;
+ (void)invalidateAllRequest;

- (id)init;
- (void)dealloc;
- (void)_addRequest:(id)a0 forEventId:(unsigned int)a1;
- (void)_removeRequestForEventId:(unsigned int)a0;
- (id)_removeAllRequest;
- (id)_requestForEventId:(unsigned int)a0;
- (unsigned int)innerSendCgi:(id)a0 completion:(id /* block */)a1;
- (unsigned int)sendCgi:(id)a0 completion:(id /* block */)a1;
- (void)cancelCgiRequest:(unsigned int)a0;
- (void)invalidateAllRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)reportCostTimeWithWrap:(id)a0 pbCGIWrap:(id)a1;
- (id)convertWACgiProfileInfoFromProtobufCgiProFile:(id)a0;
- (void).cxx_destruct;

@end
