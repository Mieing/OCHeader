@class NSNumber, NSString;
@protocol WCAccountBindPhoneForRegCGIDelegate;

@interface WCAccountBindPhoneForRegCGI : MMObject <PBMessageObserverDelegate> {
    id<WCAccountBindPhoneForRegCGIDelegate> _delegate;
    int _accountRegMode;
    unsigned int _nextAuthType;
}

@property (nonatomic) unsigned int eventId;
@property (retain, nonatomic) NSNumber *idcRedirectCount;
@property (retain, nonatomic) NSNumber *mmtlsSetCount;
@property (retain, nonatomic) NSString *currentUserName;
@property (retain, nonatomic) NSString *clientSeqID;
@property (retain, nonatomic) NSString *extDeviceRegisterURL;
@property (nonatomic) BOOL preserveLoggedIn;

+ (void)setRequest:(id)a0 FromAccountData:(id)a1;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (unsigned int)cgiNumber;
- (BOOL)isRequesting;
- (void)cancelAllEvent;
- (void)logoutIfNeededAndStartRequest:(id)a0;
- (void)createEventFromRequest:(id)a0;
- (void)retryFromCgi:(id)a0;
- (BOOL)checkRegPhoneNumberStatus:(id)a0 tryCount:(unsigned int)a1 adjustRet:(unsigned int)a2 accountData:(id)a3;
- (BOOL)checkLoginPhoneNumberStatus:(id)a0 tryCount:(unsigned int)a1 adjustRet:(unsigned int)a2 authTargetUserName:(id)a3 userShowName:(id)a4;
- (BOOL)getRegVerifyCode:(id)a0;
- (BOOL)getLoginVerifyCode:(id)a0 lastCheckType:(unsigned int)a1;
- (BOOL)getLoginVoiceVerifyCode:(id)a0 lastCheckType:(unsigned int)a1 languageCode:(id)a2;
- (BOOL)getRegVoiceVerifyCode:(id)a0 languageCode:(id)a1;
- (BOOL)checkRegVerifyCode:(id)a0 verifyCode:(id)a1 checkType:(unsigned int)a2 checkCount:(unsigned int)a3;
- (BOOL)checkLoginVerifyCode:(id)a0 verifyCode:(id)a1 checkType:(unsigned int)a2 checkCount:(unsigned int)a3 authTargetUserName:(id)a4 userShowName:(id)a5;
- (BOOL)doPostCheckRegState:(id)a0;
- (BOOL)handleIdcRedirect:(id)a0;
- (BOOL)handleMMTLS;
- (void)handleResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
