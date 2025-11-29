@class NSArray;

@interface BDXBridgeCanIUseMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL isAvailable;
@property (retain, nonatomic) NSArray *params;
@property (retain, nonatomic) NSArray *results;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
