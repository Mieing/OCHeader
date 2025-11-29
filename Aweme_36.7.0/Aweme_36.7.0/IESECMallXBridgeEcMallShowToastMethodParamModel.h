@class NSString, NSNumber;

@interface IESECMallXBridgeEcMallShowToastMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *gravity;
@property (retain, nonatomic) NSNumber *xOffset;
@property (retain, nonatomic) NSNumber *yOffset;
@property (retain, nonatomic) NSNumber *duration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
