@class NSMutableDictionary, NSMapTable;

@interface ACCModeCameraSessionServiceImpl : NSObject <ACCModeCameraSessionService>

@property (retain, nonatomic) NSMutableDictionary *sessionTypeToSessionKeyDict;
@property (retain, nonatomic) NSMutableDictionary *sessionKeyToSessionTypeDict;
@property (retain, nonatomic) NSMapTable *modeCameraSessionConfigAssemberTable;
@property (retain, nonatomic) NSMapTable *modeCameraSessionBuildListenerTable;

- (unsigned long long)cameraSessionTypeForSessionKey:(id)a0;
- (unsigned long long)sessionTypeWithMode:(id)a0;
- (id)cameraSessionKeyForType:(unsigned long long)a0;
- (void)saveCameraSessionKey:(id)a0 forModeType:(unsigned long long)a1;
- (void)registerCameraSessionConfigAssembler:(id)a0 forType:(unsigned long long)a1;
- (id)cemeraSessionConfigAssemblerForType:(unsigned long long)a0;
- (void)registerCameraSessionBuildListener:(id)a0 forType:(unsigned long long)a1;
- (id)cemeraSessionBuildListenerForType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
