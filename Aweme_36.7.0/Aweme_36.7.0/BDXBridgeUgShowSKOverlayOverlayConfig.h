@class NSNumber;

@interface BDXBridgeUgShowSKOverlayOverlayConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *userDismissible;
@property (nonatomic) long long position;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
