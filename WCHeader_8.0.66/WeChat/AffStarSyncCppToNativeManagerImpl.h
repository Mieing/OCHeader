@class NSString;

@interface AffStarSyncCppToNativeManagerImpl : NSObject <AffStarSyncCppToNativeManagerBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleCmd:(id)a0;
- (BOOL)handleBackup:(id)a0;
- (id)getBackupStarData;

@end
