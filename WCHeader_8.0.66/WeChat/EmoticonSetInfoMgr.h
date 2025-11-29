@class NSRecursiveLock, NSMutableDictionary, NSString, EmoticonDataDB;

@interface EmoticonSetInfoMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *oLock;
@property (retain, nonatomic) EmoticonDataDB *oEmoticonPackageDB;
@property (retain) NSMutableDictionary *setInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (BOOL)addSetInfoWith:(id)a0 title:(id)a1 desc:(id)a2 iconUrl:(id)a3 panelUrl:(id)a4;
- (BOOL)update:(id)a0 title:(id)a1;
- (BOOL)update:(id)a0 desc:(id)a1;
- (BOOL)update:(id)a0 iconUrl:(id)a1;
- (BOOL)update:(id)a0 panelUrl:(id)a1;
- (id)getSetInfoFor:(id)a0;
- (id)getAllSetInfo;
- (BOOL)delAllSetInfo;
- (BOOL)delSetInfoFor:(id)a0;
- (void)cleanAllCachedSetInfos;
- (void)updateCachedSetInfo:(id)a0;
- (id)getIconImageForSetKey:(id)a0;
- (id)getPanelImageForSetKey:(id)a0;
- (id)getImageForSetKey:(id)a0 withType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
