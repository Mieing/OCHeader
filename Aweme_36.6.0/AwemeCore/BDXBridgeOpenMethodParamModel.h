@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenMethodParamModel : BDXBridgeModel

@property (readonly, nonatomic) BOOL bReplace;
@property (readonly, nonatomic) BOOL bFirstClose;
@property (readonly, nonatomic) BOOL bUseSysBrowser;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL replace;
@property (nonatomic) BOOL firstClose;
@property (nonatomic) BOOL useSysBrowser;
@property (retain, nonatomic) NSNumber *asyncCheckOpen;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long replaceType;

+ (id)requiredKeyPaths;
+ (id)replaceTypeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
