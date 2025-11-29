@class NSNumber;

@interface BDXBridgeSetContainerCommonInteraction : BDXBridgeModel

@property (retain, nonatomic) NSNumber *disableBackPress;
@property (retain, nonatomic) NSNumber *disableBounce;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
