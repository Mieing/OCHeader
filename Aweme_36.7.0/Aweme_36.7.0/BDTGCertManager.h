@class NSString;

@interface BDTGCertManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _certMutex;
}

@property (class, readonly, copy, nonatomic) NSString *clientCert;
@property (class, readonly, copy, nonatomic) NSString *serverCert;
@property (class, readonly, copy, nonatomic) NSString *serverCertSN;

@property (copy, nonatomic) NSString *clientCert;
@property (copy, nonatomic) NSString *serverCert;
@property (copy, nonatomic) NSString *serverCertSN;

+ (void)updateClientCert:(id)a0 serverCert:(id)a1 serverCertSN:(id)a2;
+ (void)updateClientCert:(id)a0;
+ (void)removeClientCert;
+ (void)start;
+ (id)sharedInstance;

- (void)updateClientCert:(id)a0 serverCert:(id)a1 serverCertSN:(id)a2;
- (BOOL)preloadReeECDH;
- (void)p_loadCachedCert;
- (void)updateClientCert:(id)a0;
- (void)removeClientCert;
- (void).cxx_destruct;
- (id)init;

@end
