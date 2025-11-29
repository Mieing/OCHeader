@class NSString, NSDictionary, BDTokenCert;

@interface BDUGLocationCert : NSObject <BDUGCertProtocol>

@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) BDTokenCert *cert;
@property (retain, nonatomic) NSDictionary *certParams;
@property (retain, nonatomic) NSDictionary *sdkSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithBDTokenCert:(id)a0;

- (id)locationInitSettings;
- (BOOL)checkCertFromEntry:(id)a0;
- (id)certConfig;
- (id)rawPrivacyCert;
- (void).cxx_destruct;

@end
