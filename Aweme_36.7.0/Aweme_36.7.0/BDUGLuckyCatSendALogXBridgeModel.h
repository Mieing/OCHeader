@class NSString;

@interface BDUGLuckyCatSendALogXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *message;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
