@class NSString, NSDictionary;

@interface BDXBridgeTtcjpayStartContactSelectPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
