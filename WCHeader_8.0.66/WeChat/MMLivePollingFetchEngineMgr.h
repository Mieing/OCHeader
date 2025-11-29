@class NSString, NSMutableDictionary;

@interface MMLivePollingFetchEngineMgr : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) NSMutableDictionary *engineMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)startEngineForLive:(id)a0 requestParamsMaker:(id /* block */)a1;
- (id)engineForLive:(id)a0;
- (void)stopEngineForLive:(id)a0;
- (void).cxx_destruct;

@end
