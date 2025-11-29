@class NSMutableDictionary, NSString, LoginUserInfo, NSMutableArray;

@interface LoginInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_arrUserInfos;
@property (retain, nonatomic) NSMutableDictionary *m_dicUserInfos;
@property (retain, nonatomic) LoginUserInfo *m_curUserInfo;
@property (nonatomic) unsigned int m_uiLogoutType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_arrUserInfos;
+ (void)PBArrayAdd_m_uiLogoutType;
+ (void)initialize;
+ (id)getLoginInfoPath;
+ (id)sharedLoginInfo;
+ (BOOL)updateUserInfo:(id)a0 fromLocalInfo:(id)a1;
+ (void)updateToLocalInfo:(id)a0;

- (id)getPBPropertyTable;
- (void)continueInit;
- (BOOL)isLogoutSwitch;
- (void)setLogoutSwitch:(BOOL)a0;
- (id)curStateDescription;
- (void)saveLoginInfo;
- (id)getLoginInfo:(id)a0;
- (id)getCurLoginUserInfos;
- (void)updateLastLoginUserInfo:(id)a0 fromSwitch:(BOOL)a1;
- (BOOL)checkAndRevise;
- (void)removeLoginUserInfo:(id)a0;
- (void)reportSwitchAccountWithOpCode:(unsigned int)a0 userName:(id)a1;
- (void).cxx_destruct;

@end
