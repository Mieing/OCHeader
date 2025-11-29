@class NSString;

@interface BDXBridgeLeftSidebarCloseMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL closeAfterOpenPage;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
