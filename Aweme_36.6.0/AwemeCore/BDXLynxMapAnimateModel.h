@class NSString, BDXLynxMapAnimateConfigModel;

@interface BDXLynxMapAnimateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) BDXLynxMapAnimateConfigModel *scale;
@property (retain, nonatomic) BDXLynxMapAnimateConfigModel *alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)modelWithDictionary:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
