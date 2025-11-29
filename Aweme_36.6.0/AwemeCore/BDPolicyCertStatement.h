@class NSDictionary;

@interface BDPolicyCertStatement : NSObject

@property (retain, nonatomic) NSDictionary *certStatement;
@property (retain, nonatomic) NSDictionary *dynamicCertStatement;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;

+ (id)sharedInstance;

- (void)setupCertStatement:(id)a0;
- (void)setupDynamicStatement:(id)a0;
- (id)getCertStatement:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
