@class NSString;

@interface JLRPNFCMessageModel : NSObject

@property (copy, nonatomic) NSString *ExampleLocation;
@property (copy, nonatomic) NSString *wait;
@property (copy, nonatomic) NSString *need;
@property (copy, nonatomic) NSString *dontMove;
@property (copy, nonatomic) NSString *networkAgain;
@property (copy, nonatomic) NSString *readFailNoMove;
@property (copy, nonatomic) NSString *readCertificatesSuccee;
@property (copy, nonatomic) NSString *readCertificatesFail;
@property (copy, nonatomic) NSString *authenticationError;
@property (copy, nonatomic) NSString *certificatesInfoError;
@property (copy, nonatomic) NSString *notCertificatesState;

- (void).cxx_destruct;

@end
