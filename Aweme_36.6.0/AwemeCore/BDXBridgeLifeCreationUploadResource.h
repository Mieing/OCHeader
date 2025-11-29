@class NSString, NSNumber;

@interface BDXBridgeLifeCreationUploadResource : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSNumber *enableCompress;
@property (nonatomic) long long fileType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
