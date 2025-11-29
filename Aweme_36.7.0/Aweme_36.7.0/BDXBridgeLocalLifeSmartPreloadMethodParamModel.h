@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeLocalLifeSmartPreloadMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *targetPage;
@property (copy, nonatomic) NSString *fromScene;
@property (copy, nonatomic) NSString *fromSubScene;
@property (copy, nonatomic) NSString *pitayaBusinessName;
@property (copy, nonatomic) NSString *extraMobParams;
@property (copy, nonatomic) NSString *triggerPitayaMode;
@property (retain, nonatomic) NSNumber *cacheValidTime;
@property (retain, nonatomic) NSNumber *isReleaseAfterUse;
@property (retain, nonatomic) NSArray *targetSchemas;
@property (copy, nonatomic) NSDictionary *pagePreloadExtraConfig;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
