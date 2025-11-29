@class NSString, NSDictionary;

@interface BDUGLuckyCatSendLogXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
