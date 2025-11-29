@protocol DTFNFCIdentityProtocol, DTFFaceIdentityProtocol;

@interface DTFBeanService : NSObject

@property (retain, nonatomic) id<DTFFaceIdentityProtocol> faceIdentity;
@property (retain, nonatomic) id<DTFNFCIdentityProtocol> nfcIdentity;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setup;

@end
