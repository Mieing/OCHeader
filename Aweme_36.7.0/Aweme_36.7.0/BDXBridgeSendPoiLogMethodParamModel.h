@class NSString, NSDictionary, NSNumber;

@interface BDXBridgeSendPoiLogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *btm;
@property (retain, nonatomic) NSNumber *enter_new_page;
@property (retain, nonatomic) NSNumber *add_btm_chain;
@property (retain, nonatomic) NSNumber *chain_length;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
