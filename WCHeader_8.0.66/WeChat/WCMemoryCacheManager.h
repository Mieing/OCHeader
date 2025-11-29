@class NSString;

@interface WCMemoryCacheManager : MMRootService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)addUserType:(unsigned long long)a0;
- (void)removeUserType:(unsigned long long)a0;
- (void)callClearMemoryCache:(unsigned long long)a0;
- (void)handlePerfWarningNotification:(id)a0;

@end
