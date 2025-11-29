@class NSNumber;

@interface BDXBridgeGetAppInfoSafeArea : BDXBridgeModel

@property (retain, nonatomic) NSNumber *marginTop;
@property (retain, nonatomic) NSNumber *marginBottom;
@property (retain, nonatomic) NSNumber *marginLeft;
@property (retain, nonatomic) NSNumber *marginRight;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
