@class NSString, NSMutableDictionary;

@interface WAMemoryStatMgr : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_appid2MemStatInfo;
    NSMutableDictionary *_appid2KillInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)weappStartLaunch:(id)a0 appVersion:(unsigned int)a1 debugMode:(unsigned long long)a2 isCache:(BOOL)a3;
- (void)weappEnterBackground:(id)a0;
- (void)weappBeenKilled:(id)a0 reason:(unsigned int)a1;
- (void)reportWhenMemoryWarning:(unsigned int)a0;
- (long long)getProcessMemUsed;
- (unsigned long long)getDeviceFreeMem;
- (void).cxx_destruct;

@end
