@class NSString, NSNumber;

@interface IESECMallXBridgeEcMallGetCardPositionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *target;
@property (retain, nonatomic) NSNumber *coordinate;
@property (retain, nonatomic) NSNumber *index;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
