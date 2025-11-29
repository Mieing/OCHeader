@class NSNumber, NSString, NSDictionary;

@interface AWEFCoinBridgeOpenByteCertMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *identityName;
@property (copy, nonatomic) NSString *identityCode;
@property (copy, nonatomic) NSString *certAppId;
@property (retain, nonatomic) NSDictionary *h5QueryParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
