@class NSString;

@interface IESIMDynamicPatchModel : MTLModel <MTLJSONSerializing, IESIMDynamicPatchModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double defaultWidth;
@property (nonatomic) double defaultHeight;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardKey;
@property (copy, nonatomic) NSString *sceneType;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)preserveData;
- (void)setPreserveData:(id)a0;
- (id)containerBuilder;
- (void)refreshPreserveDataWithContainer:(id)a0;
- (id)initWithTIMDynamicPatchModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
