@class MMVoidITransmitKvDataCallback, NSString;

@interface KindaWalletLockService : NSObject <PBMessageObserverDelegate, MMKWalletLockService>

@property (retain, nonatomic) MMVoidITransmitKvDataCallback *registerCallback;
@property (retain, nonatomic) MMVoidITransmitKvDataCallback *opCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDeviceSupportUseTouchLock;
- (BOOL)isiOSDeviceUsingFaceID;
- (BOOL)isDeviceEnrolledBioData;
- (void)setWalletlockClose;
- (void)setTouchLockOpen:(id)a0;
- (void)setTouchLockClose:(id)a0;
- (BOOL)isTouchLockOpenLocal;
- (void)setPatternLockOpen:(id)a0;
- (BOOL)isPatternLockOpenLocal;
- (void)checkIfPatternLockVerifyLocalImpl:(id)a0;
- (void)showTouchLockAuthViewImpl:(id)a0;
- (void)releaseTouchLockService;
- (void)prepareAndroidTouchLockAuthImpl:(id)a0 isOffline:(BOOL)a1 callback:(id)a2;
- (BOOL)isPatternLockBlock;
- (long long)getPatternLockBlockTimeInterval;
- (void)setPatternLockBlock;
- (int)getPatternLockVerifyErrorCount;
- (void)setPatternLockVerifyErrorCount:(int)a0;
- (void)callPatternLockRegisterImpl:(id)a0 token:(id)a1 callback:(id)a2;
- (void)callPatternLockOpImpl:(int)a0 nowHash:(id)a1 newHash:(id)a2 callback:(id)a3;
- (BOOL)isAndroidDeviceUsingFaceID;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onGetRegisterNewPatternLockResponse:(id)a0 eventID:(unsigned int)a1;
- (void)onGetOpPatternLockResponse:(id)a0 eventID:(unsigned int)a1;
- (void).cxx_destruct;

@end
