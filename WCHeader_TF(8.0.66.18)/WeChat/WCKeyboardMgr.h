@class NSString;

@interface WCKeyboardMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL externalKeyboardConnected;
@property (nonatomic) BOOL receiveNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isExternalKeyboardConnected;
- (void)externalKeyboardConnect:(id)a0;
- (void)externalKeyboardDisconnect:(id)a0;

@end
