@class NSString, NSNumber;

@interface BDXBridgeOpenHunterContainerXOpenParams : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL replace;
@property (nonatomic) BOOL firstClose;
@property (nonatomic) BOOL useSysBrowser;
@property (retain, nonatomic) NSNumber *asyncCheckOpen;
@property (nonatomic) long long replaceType;

+ (id)requiredKeyPaths;
+ (id)replaceTypeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
