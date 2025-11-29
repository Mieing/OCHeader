@class NSString, BDPThreadSafeDictionary;

@interface BDPVoIPManager : NSObject <BDPWarmBootMessage, BDPContainerLifeCycleMessage, BDPPermissionChangeMessage>

@property (retain, nonatomic) BDPThreadSafeDictionary *engines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)engineWithUniqueID:(id)a0;
- (void)permissionStatusChanged:(id)a0 on:(BOOL)a1 uniqueID:(id)a2;
- (void)createEngineWithUniqueID:(id)a0 appId:(id)a1 delegate:(id)a2;
- (void)_destroyAllEngine;
- (void)_destoryEngineWithUniqueID:(id)a0;
- (void)onRtcChatInterrupted:(id)a0;
- (void)onRtcStatusChange:(id)a0 error:(id)a1;
- (BOOL)engineIgnoreRepeatCall:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
