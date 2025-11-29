@class NSString;

@interface IESECInnerFlowProductSearchSchemaModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageSearchSchema;
@property (copy, nonatomic) NSString *titleSearchSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
