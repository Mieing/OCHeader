@class BDPrivacyCertValidateContext;
@protocol BDPrivacyCertProtocol;

@interface BDCertUnit : NSObject

@property (retain, nonatomic) id<BDPrivacyCertProtocol> cert;
@property (retain, nonatomic) BDPrivacyCertValidateContext *context;

- (void).cxx_destruct;

@end
