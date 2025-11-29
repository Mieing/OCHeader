@class NSString, NSDictionary;

@interface AWEAdSendEventToLokiParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
