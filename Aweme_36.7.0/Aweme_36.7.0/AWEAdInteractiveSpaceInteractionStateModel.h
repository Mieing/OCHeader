@class NSNumber;

@interface AWEAdInteractiveSpaceInteractionStateModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *interactionState;
@property (retain, nonatomic) NSNumber *interactionFrom;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
