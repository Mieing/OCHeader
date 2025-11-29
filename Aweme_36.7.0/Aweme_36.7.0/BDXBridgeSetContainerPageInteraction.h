@class NSNumber;

@interface BDXBridgeSetContainerPageInteraction : BDXBridgeModel

@property (retain, nonatomic) NSNumber *disableSwipe;
@property (retain, nonatomic) NSNumber *shouldFullScreen;
@property (nonatomic) long long navBtnType;

+ (id)navBtnTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
