@class NSString, FinderNicknameVerifyInfo, FinderClubInfo, MasterWxAcctInfo, FinderContact;

@interface BindFinderClubInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo;
@property (retain, nonatomic) FinderContact *selfContact;
@property (nonatomic) unsigned int userFlag;
@property (nonatomic) unsigned int logoutLock;
@property (retain, nonatomic) NSString *logoutUrl;
@property (nonatomic) unsigned long long extFlag;
@property (retain, nonatomic) FinderClubInfo *clubInfo;
@property (retain, nonatomic) MasterWxAcctInfo *masterWxAcct;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setMasterWxAcct:(id)a0;
- (id)masterWxAcct;
- (void)setClubInfo:(id)a0;
- (id)clubInfo;
- (void)setExtFlag:(unsigned long long)a0;
- (unsigned long long)extFlag;
- (void)setLogoutUrl:(id)a0;
- (id)logoutUrl;
- (void)setLogoutLock:(unsigned int)a0;
- (unsigned int)logoutLock;
- (void)setUserFlag:(unsigned int)a0;
- (unsigned int)userFlag;
- (void)setSelfContact:(id)a0;
- (id)selfContact;
- (void)setVerifyInfo:(id)a0;
- (id)verifyInfo;
- (id)archivedWCTValue;

@end
