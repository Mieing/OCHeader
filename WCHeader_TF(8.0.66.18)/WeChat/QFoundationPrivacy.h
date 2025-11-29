@class NSString;

@interface QFoundationPrivacy : NSObject

@property (nonatomic) BOOL isAgreed;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *hardWare;
@property (nonatomic) double scale;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } readWriteLock;
@property (nonatomic) BOOL toReplaceInlandDomain;

+ (id)singleton;

- (void)setPrivacyAgreement:(BOOL)a0;
- (BOOL)privacyAgreementStatus;
- (id)init;
- (id)getAppVersion;
- (id)getAppIdentifier;
- (id)getUUID;
- (id)getIDFV;
- (id)getHardware;
- (double)deviceScale;
- (void)dealloc;
- (void).cxx_destruct;

@end
