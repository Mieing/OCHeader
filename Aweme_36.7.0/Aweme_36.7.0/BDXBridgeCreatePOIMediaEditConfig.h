@class NSString;

@interface BDXBridgeCreatePOIMediaEditConfig : BDXBridgeModel

@property (nonatomic) BOOL editAfterShoot;
@property (copy, nonatomic) NSString *backTitle;
@property (copy, nonatomic) NSString *saveButtonTitle;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
