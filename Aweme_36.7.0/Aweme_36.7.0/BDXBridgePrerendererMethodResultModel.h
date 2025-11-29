@class NSString;

@interface BDXBridgePrerendererMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *container;
@property (nonatomic) BOOL result;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
