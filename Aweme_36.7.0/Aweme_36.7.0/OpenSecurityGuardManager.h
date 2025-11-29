@class NSString, NSMutableDictionary;

@interface OpenSecurityGuardManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sdkDict;
@property (retain, nonatomic) NSString *authCode;

+ (id)getGlobalUserData;
+ (BOOL)setGlobalUserData:(id)a0 GlobalUserValue:(id)a1;
+ (id)getInstance:(id)a0 error:(id *)a1;
+ (id)getInstance;

- (id)getStaticDataStoreComp;
- (id)getOpenOpenSDKComp;
- (BOOL)setReportSwitch:(BOOL)a0;
- (id)getStaticDataEncryptComp;
- (id)getSecureSignatureComp;
- (id)getDynamicDataStoreComp;
- (id)getDataCollectionComp;
- (id)getDynamicDataEncryptComp;
- (id)getStaticKeyEncryptComp;
- (id)getUMIDComp;
- (id)getAtlasEncryptComp;
- (id)getNoCaptchaComp;
- (id)getSimulatorDetectComp;
- (id)getSecurityBodyComp;
- (id)getComponent:(int)a0;
- (id)getInterface:(id)a0 error:(id *)a1;
- (id)getSDKVersion;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (id)getInterface:(id)a0;

@end
