@class NSString;

@interface BDXBridgeCampaignGetAppListAppList : BDXBridgeModel

@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scheme;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
