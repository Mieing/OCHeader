@class NSString;

@interface BDUGLuckyTimerPendantOpertaionXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *operationType;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
