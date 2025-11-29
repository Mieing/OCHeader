@class NSString, MMPatternLockBufferData;

@interface MMPatternLockPwdMgr : MMUserService <WCPayWalletUpdateExt, PBMessageObserverDelegate, IUpdateProfileMgrExt, MMUIViewControllerDelegate, IWCPayControlLogicExt, MMServiceProtocol>

@property (retain, nonatomic) MMPatternLockBufferData *lockBuffer;
@property (nonatomic) BOOL isLocalVerify;
@property (nonatomic) BOOL isNeedVerifyPwd;
@property (nonatomic) int userRegFlag;
@property (nonatomic) BOOL isCloseViaToken;
@property unsigned int m_payCardListTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (id)init;
- (void)stopPayCardListLogic;
- (void)initData;
- (BOOL)detectLocalBufferData;
- (unsigned long long)isPatternLockSetup;
- (void)setupNewPatternLockPwdWithUserToken:(id)a0 andPatternHash:(id)a1;
- (void)closePatternLockPwdWithPatternHash:(id)a0;
- (void)closePatternLockPwdWithUserToken:(id)a0;
- (void)modifyPatternLockPwdWithOldPatternHash:(id)a0 andNewHash:(id)a1;
- (void)verifyPatternLockPwdWithPatternHash:(id)a0;
- (BOOL)isNeedSvrVerify;
- (id)getPatternSvrHash;
- (unsigned long long)getPatternLockTimeInterval;
- (BOOL)updateBufferDataWithSvrBuffer:(id)a0;
- (void)sendPatternLockOpRequestWithCmdID:(unsigned int)a0 oldHash:(id)a1 newHash:(id)a2;
- (int)verifyBufferDataIsInvalid;
- (int)verifyLockInfoIsValid;
- (id)getBufferKeyDataWithVersion:(unsigned int)a0;
- (void)checkPatternLockStatusViaSvr;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onGetRegisterNewPatternLockResponse:(id)a0 eventID:(unsigned int)a1;
- (void)onGetOpPatternLockResponse:(id)a0 eventID:(unsigned int)a1;
- (void)onOpPatternLockResponseErrorWithOpCmd:(unsigned int)a0;
- (void)onOpPatternLockResponseOKWithOpCmd:(unsigned int)a0;
- (void)handlePatternLockCheckStatusBack:(id)a0;
- (void)onProfileChange;
- (id)getViewController;
- (void)OnPayCardListChanged:(id)a0;
- (void)onWCPayWalletUpdateDidCall;
- (void).cxx_destruct;

@end
