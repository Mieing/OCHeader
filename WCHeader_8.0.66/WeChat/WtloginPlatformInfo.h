@class NSString, MemSig, NSData, NSMutableDictionary, SafeSingleItemWrapper, RemortServerList;

@interface WtloginPlatformInfo : NSObject {
    char *if_names[32];
    char *ip_names[32];
    char *hw_addrs[32];
    unsigned long long ip_addrs[32];
    int nextAddr;
    NSString *filePath;
    NSMutableDictionary *wtloginConfigDic;
    SafeSingleItemWrapper *ksidWrapper;
    NSString *sigFilePath;
}

@property (readonly) NSString *macAddr;
@property (readonly) NSString *ipStr;
@property (readonly) unsigned int clientIp;
@property (readonly) NSString *devType;
@property (readonly) NSString *iosVer;
@property (readonly) NSString *osName;
@property (readonly) NSData *guid;
@property (readonly) unsigned char cIsNew;
@property (readonly) unsigned char cIsDiff;
@property (readonly) unsigned char cIsGetGuid;
@property (readonly) unsigned char cGUIDSrc;
@property (readonly) unsigned char cReadFailFlag;
@property (readonly) unsigned char cDevChgFlag;
@property (retain) MemSig *deviceSig;
@property unsigned int dwMyVer;
@property unsigned int dwMyPubNo;
@property unsigned int dwMyClientType;
@property (readonly) NSMutableDictionary *nameDictionary;
@property (readonly) NSMutableDictionary *sigDictionary;
@property (readonly) RemortServerList *stServerinfo;
@property (readonly) NSString *wtloginIosSdkVer;
@property (readonly) NSString *wtloginBuildTime;
@property (readonly) unsigned int wtloginBigVer;
@property int dwDiffTime;
@property unsigned int dwClientIP;

+ (id)dataSafeFilePathWithName:(id)a0;
+ (int)wtloginNetState;
+ (id)wtloginCrtCarrierName;

- (void)InitAddresses;
- (void)FreeAddresses;
- (void)GetIPAddresses;
- (void)GetHWAddresses;
- (id)macaddress;
- (void)genGuid;
- (id)getDeviceVersion;
- (BOOL)tryDecrypt:(id)a0 byKey:(id)a1 andOutData:(id)a2;
- (id)init;
- (void)wtloginPlatformDataInit;
- (void)dealloc;
- (id)configObjectForKey:(id)a0;
- (void)setConfigObject:(id)a0 forKey:(id)a1;
- (int)netState;
- (id)crtCarrierName;
- (id)tgtgtKeyFromKeyChain;
- (id)ksidFromKeyChain;
- (BOOL)setKsidToKeyChain:(id)a0;
- (BOOL)setKsidToConfig:(id)a0 forAccount:(id)a1;
- (id)ksidForUser:(id)a0;
- (void)resetKeyChain;
- (BOOL)setSavePwdSigToConfig:(id)a0 forAccount:(unsigned int)a1;
- (id)pwdSigUser:(unsigned int)a0;
- (void)clearPwdSigUser:(unsigned int)a0;
- (BOOL)setNameToConfig:(id)a0 forUin:(unsigned int)a1;
- (void)clearNameToUin:(id)a0;
- (BOOL)setSigVailidateTime:(unsigned int)a0 bySigType:(unsigned int)a1;
- (unsigned int)sigVailidateBySigType:(unsigned int)a0;
- (BOOL)resetLastLoginInfo;
- (unsigned int)lastLoginTime;
- (id)lastLoginSdkVer;
- (id)lastLoginAppVer;
- (id)appBundleShortVersionString;
- (id)appBundleVersion;
- (id)appMainBundleIndentify;
- (void)writeSigDataTofile;
- (void)_checkDevice;

@end
