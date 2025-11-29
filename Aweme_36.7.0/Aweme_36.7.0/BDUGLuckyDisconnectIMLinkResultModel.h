@class NSNumber, NSString;

@interface BDUGLuckyDisconnectIMLinkResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *success;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
