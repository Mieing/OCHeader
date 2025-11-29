@class NSString;

@interface TingAudioPageMixLoadMgrCpp : UnitRCObjcBaseProxyClass <TingAudioPageMixLoadMgr>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)addListener:(id)a0 listener:(id)a1;
- (BOOL)removeListener:(id)a0 listener:(id)a1;
- (void)loadData:(id)a0 reqInfo:(id)a1;
- (unsigned long long)getLastReqTimeSec;
- (id)getFirstScreenNetCache:(id)a0;
- (void)setFirstScreenNetCache:(id)a0 response:(id)a1;
- (void)clearFilterSet;
- (void)filterAndSetListenIds:(id)a0 topLines:(BOOL)a1;

@end
