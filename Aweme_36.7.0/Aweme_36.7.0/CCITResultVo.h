@class NSString;

@interface CCITResultVo : NSObject

@property (copy, nonatomic) NSString *resultCode;
@property (copy, nonatomic) NSString *resultMsg;
@property (copy, nonatomic) NSString *csr;
@property (copy, nonatomic) NSString *encKey;
@property (copy, nonatomic) NSString *encData;
@property (copy, nonatomic) NSString *HMAC;
@property (copy, nonatomic) NSString *q1Id;
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
