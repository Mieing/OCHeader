@class NSString;

@interface VQMService : MMUserService <MMServiceProtocol, CNetworkStatusExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServicePauseBackgroundTask:(unsigned long long)a0;
- (void)onServiceResumeBackgroundTask:(unsigned long long)a0;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onSimCardNetTypeChange;

@end
