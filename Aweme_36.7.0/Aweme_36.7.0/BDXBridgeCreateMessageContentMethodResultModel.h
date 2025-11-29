@class NSNumber, NSDictionary;

@interface BDXBridgeCreateMessageContentMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *msgType;
@property (copy, nonatomic) NSDictionary *msgContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
