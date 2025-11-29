@class NSString;

@interface CCITCertInfo : NSObject

@property (retain, nonatomic) NSString *certDN;
@property (retain, nonatomic) NSString *certIssureDN;
@property (retain, nonatomic) NSString *certVersion;
@property (retain, nonatomic) NSString *certSN;
@property (retain, nonatomic) NSString *certNotBefore;
@property (retain, nonatomic) NSString *certNotAfter;
@property (retain, nonatomic) NSString *certAlg;
@property (retain, nonatomic) NSString *publicKey;

- (void).cxx_destruct;

@end
