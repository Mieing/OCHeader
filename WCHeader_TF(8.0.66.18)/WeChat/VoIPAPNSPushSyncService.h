@class NSString;

@interface VoIPAPNSPushSyncService : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCacheFromAppGroup;
- (void)handleInviteInfosCacheFromAppGroup;
- (void)handleCancelInfosCacheFromAppGroup;
- (void)handleInfosCacheFromAppGroup;
- (void)cook;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;

@end
