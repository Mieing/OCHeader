@class NSString, NSNumber;

@interface BDXBridgeOpenCardOCRMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *from;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
