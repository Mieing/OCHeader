@class NSString, NSDictionary;

@interface HunterDynamicPatchModel : NSObject <HunterDynamicPatchProtocol>

@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *serverData;
@property (retain, nonatomic) NSDictionary *clientData;
@property (retain, nonatomic) NSDictionary *customGlobalProps;
@property (retain, nonatomic) NSDictionary *clientExtraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)configWithParams:(id)a0;
- (void)updateSchema:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithParams:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSchema:(id)a0;

@end
