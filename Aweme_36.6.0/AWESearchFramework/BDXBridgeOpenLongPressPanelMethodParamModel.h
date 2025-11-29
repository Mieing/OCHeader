@class NSString;

@interface BDXBridgeOpenLongPressPanelMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) id params;
@property (copy, nonatomic) NSString *event;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
