@class NSRecursiveLock, NSArray, NSDictionary, MMAuthInfo, NSData, NSString, MMMultiHostAuthInfo;

@interface MMAuthService : MMUserService <MMKernelExt, MMServiceProtocol>

@property (retain) MMAuthInfo *oriAuthInfo;
@property (retain) MMMultiHostAuthInfo *mainAuthInfo;
@property (retain, nonatomic) NSRecursiveLock *axAuthLock;
@property (retain, nonatomic) NSArray *axAuthWrapList;
@property (retain, nonatomic) NSDictionary *axAuthWrapFromHostDic;
@property (nonatomic) unsigned int authStartTime;
@property (nonatomic) unsigned int axTicketExpireTime;
@property (nonatomic) unsigned int axTicketAutoRetry;
@property (retain) NSData *ecdhKey;
@property (retain, nonatomic) NSData *oriSessionKey;
@property (retain, nonatomic) NSData *mainHostServerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canUseInSafemode;

- (void)onServiceInit;
- (void)setOriSessionKey:(id)a0;
- (id)oriSessionKey;
- (void)updateMainHostClientSessionKey:(id)a0 serverSessionKey:(id)a1 hostAlgoList:(id)a2;
- (void)setMainHostServerId:(id)a0;
- (id)mainHostServerId;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })cEcdhkey;
- (void)updateAxAuthSecRespList:(id)a0 authStartTime:(unsigned int)a1;
- (void)startAxAuthRequestsOnMainThread;
- (id)authInfoForCgi:(unsigned int)a0 host:(id)a1;
- (id)mainHostDecryptKeyForEncryptAlgo:(int)a0;
- (id)axAuthWrapForHost:(id)a0;
- (unsigned long long)checkAxAuthStateForHost:(id)a0;
- (void)onAuthOK;
- (void).cxx_destruct;

@end
