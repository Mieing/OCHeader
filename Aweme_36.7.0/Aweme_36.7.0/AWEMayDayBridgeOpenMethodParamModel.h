@class NSString, NSDictionary;

@interface AWEMayDayBridgeOpenMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *state;
@property (nonatomic) BOOL replace;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) BOOL useSysBrowser;
@property (copy, nonatomic) NSString *memoryLevel;
@property (copy, nonatomic) NSString *backToSchema;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isRoot;
@property (nonatomic) BOOL firstClose;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
