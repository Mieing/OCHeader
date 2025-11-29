@class NSString;

@interface BDUGLuckyCatSendSMSXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *content;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
