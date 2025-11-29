@class NSNumber;

@interface BDALokiPositionInfoResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *left;
@property (retain, nonatomic) NSNumber *right;
@property (retain, nonatomic) NSNumber *bottom;
@property (retain, nonatomic) NSNumber *top;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
