@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeCertOpenByteCertMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *certAppId;
@property (retain, nonatomic) NSNumber *faceOnly;
@property (copy, nonatomic) NSString *identityName;
@property (copy, nonatomic) NSString *identityCode;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *h5QueryParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
