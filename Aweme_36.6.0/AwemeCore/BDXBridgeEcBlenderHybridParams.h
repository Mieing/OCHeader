@class NSString, NSArray, NSDictionary;

@interface BDXBridgeEcBlenderHybridParams : BDXBridgeModel

@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *property;
@property (retain, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDictionary *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
