@class WloginUserInfo, MemAppidSigManager;

@interface MemUserAppidSig : NSObject <NSCoding> {
    MemAppidSigManager *userSigList;
}

@property (readonly, nonatomic) WloginUserInfo *userInfo;

- (id)initWithBasicInfo:(unsigned int)a0 andPubNo:(unsigned int)a1 andClientType:(unsigned int)a2;
- (void)dealloc;
- (id)sigByAppid:(unsigned int)a0 andSigName:(id)a1;
- (void)removeSigByAppid:(unsigned int)a0;
- (void)setSig:(id)a0;
- (void)setPriority:(unsigned int)a0 andTime:(unsigned int)a1 byAppid:(unsigned int)a2;
- (BOOL)hasExpireByAppid:(unsigned int)a0 andAppExpTime:(unsigned int)a1;
- (BOOL)hasExpireBySigType:(unsigned int)a0 andAppid:(unsigned int)a1;
- (void)setUserUin:(unsigned int)a0;
- (unsigned int)userUin;
- (unsigned int)topPriorityAppid;
- (void)printUserAndSig;
- (BOOL)encodeUserPwdSig:(id)a0 byKey:(id)a1 outDataBuff:(id)a2;
- (int)decodeUserPwdSigData:(id)a0 andSigAppId:(unsigned int)a1 byKey:(id)a2 outPwdSig:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
