@class NSString;

@interface JLNFCMessageModel : NSObject

@property (nonatomic) long long lState;
@property (nonatomic) long long cState;
@property (copy, nonatomic) NSString *ExampleLocation;
@property (copy, nonatomic) NSString *need;
@property (copy, nonatomic) NSString *dontMove;
@property (copy, nonatomic) NSString *wait;
@property (copy, nonatomic) NSString *networkAgain;
@property (copy, nonatomic) NSString *readFailNoMove;
@property (copy, nonatomic) NSString *readCertificatesSuccee;
@property (copy, nonatomic) NSString *readCertificatesFail;
@property (copy, nonatomic) NSString *notCertificatesState;
@property (copy, nonatomic) NSString *authenticationError;
@property (copy, nonatomic) NSString *certificatesInfoError;

+ (id)setCurrentModelWithState:(long long)a0 withReadCertificatesState:(long long)a1;
+ (id)systemLanguagesWithReadCertificatesState:(long long)a0;
+ (id)setENInfoWithReadCertificatesState:(long long)a0;
+ (id)setZH_HantInfoWithReadCertificatesState:(long long)a0;
+ (id)setZHInfoWithReadCertificatesState:(long long)a0;
+ (id)getDefaultMessageModelWithLanguagesState:(long long)a0 withReadCertificatesState:(long long)a1;
+ (long long)languages;

- (id)initWithLanguagesState:(long long)a0 withReadCertificatesState:(long long)a1;
- (void).cxx_destruct;

@end
