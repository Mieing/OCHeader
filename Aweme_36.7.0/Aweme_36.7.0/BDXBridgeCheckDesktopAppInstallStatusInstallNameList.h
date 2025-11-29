@class NSString;

@interface BDXBridgeCheckDesktopAppInstallStatusInstallNameList : BDXBridgeModel

@property (copy, nonatomic) NSString *installName;
@property (copy, nonatomic) NSString *type;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
