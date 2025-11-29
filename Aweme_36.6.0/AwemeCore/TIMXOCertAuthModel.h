@class NSString;

@interface TIMXOCertAuthModel : NSObject

@property (nonatomic) int authType;
@property (copy, nonatomic) NSString *clientCert;
@property (copy, nonatomic) NSString *clientData;
@property (copy, nonatomic) NSString *reePublicKey;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *iterVersion;
@property (copy, nonatomic) NSString *sdkCert;
@property (copy, nonatomic) NSString *tsSign;

- (void).cxx_destruct;

@end
