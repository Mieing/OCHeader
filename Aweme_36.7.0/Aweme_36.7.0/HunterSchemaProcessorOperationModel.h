@class NSString;

@interface HunterSchemaProcessorOperationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *operation;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
