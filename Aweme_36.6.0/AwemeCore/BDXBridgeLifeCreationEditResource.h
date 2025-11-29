@class NSNumber, NSString;

@interface BDXBridgeLifeCreationEditResource : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fileType;
@property (nonatomic) BOOL isLocal;
@property (copy, nonatomic) NSString *url;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
