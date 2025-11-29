@class NSString;

@interface AffNewLifeSyncManagerImpl : NSObject <AffSyncCppToNativeManagerBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugInfo:(id)a0;
- (id)debugSwitchInfo:(id)a0;
- (void)handleCmd:(int)a0 cmd:(id)a1 syncScene:(int)a2 handleFinderSync:(BOOL)a3;
- (BOOL)enableSync:(int)a0 syncScene:(int)a1;
- (id)getConfigSyncKeyPathList:(int)a0;
- (id)getNewLifeRequestSyncResult;
- (id)getWebSearchRequestSyncConfig;
- (BOOL)isShowLookOneLookEntry;
- (BOOL)isShowWebSearchEntry;
- (id)mergeSyncKey:(id)a0 newKey:(id)a1;
- (id)getLiteAppVersionInfo;

@end
