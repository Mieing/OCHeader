@class NSString;

@interface BDCTUploadEventParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *message;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
