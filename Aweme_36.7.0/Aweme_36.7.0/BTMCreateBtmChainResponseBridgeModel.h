@class NSString, NSDictionary;

@interface BTMCreateBtmChainResponseBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *btmPre;
@property (copy, nonatomic) NSString *btmPpre;
@property (copy, nonatomic) NSString *btmShowId;
@property (copy, nonatomic) NSString *btmInstanceId;
@property (copy, nonatomic) NSString *btmUnitId;
@property (copy, nonatomic) NSString *btmPreUnitId;
@property (copy, nonatomic) NSString *btmPpreUnitId;
@property (copy, nonatomic) NSDictionary *btmChain;
@property (copy, nonatomic) NSDictionary *bcmDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
