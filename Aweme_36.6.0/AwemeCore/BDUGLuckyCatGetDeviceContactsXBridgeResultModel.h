@class NSDictionary;

@interface BDUGLuckyCatGetDeviceContactsXBridgeResultModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *contacts;
@property (nonatomic) long long status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
