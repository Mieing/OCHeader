@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeSendLifeMallLogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *btm;
@property (retain, nonatomic) NSNumber *enter_new_page;
@property (retain, nonatomic) NSNumber *add_btm_chain;
@property (retain, nonatomic) NSNumber *chain_length;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
