@class NSString, NSDictionary;

@interface BDALokiSendEventParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *data;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
