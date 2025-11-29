@class NSString, NSDictionary;

@interface AWEAdAnchorLynxClickModel : BDXBridgeModel

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *adExtraData;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
