@class NSString;

@interface UDRCleaner : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)regist:(id)a0;
- (BOOL)resourceStillValid:(id)a0;
- (void)doCleanUDR;
- (void)doCleanBizUDR:(id)a0 lastResource:(id)a1;
- (void)cmdCleanAllUDR;
- (void)callBizHasBeenCleared;
- (unsigned long long)preCleanGetUDRSize;
- (void)deepCleanUDRResource;

@end
