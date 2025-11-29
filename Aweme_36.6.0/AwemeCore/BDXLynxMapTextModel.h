@class NSString, BDXLynxMapContentStyleModel;

@interface BDXLynxMapTextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) BDXLynxMapContentStyleModel *contentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsWithArray:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
