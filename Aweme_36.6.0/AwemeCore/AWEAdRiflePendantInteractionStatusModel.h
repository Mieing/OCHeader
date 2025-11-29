@class NSNumber, NSString;

@interface AWEAdRiflePendantInteractionStatusModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *pendantActionType;
@property (copy, nonatomic) NSString *refer;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
