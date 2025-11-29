@class NSNumber, NSString;

@interface BDCTOpenCNNetAuthResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *appJumpStatus;
@property (copy, nonatomic) NSString *resultCode;
@property (copy, nonatomic) NSString *resultDesc;
@property (copy, nonatomic) NSString *idCardAuthData;
@property (copy, nonatomic) NSString *certPwdData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
