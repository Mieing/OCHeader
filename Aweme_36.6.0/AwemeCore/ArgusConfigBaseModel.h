@class NSDictionary, NSString;

@interface ArgusConfigBaseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *configData;
@property (retain, nonatomic) NSDictionary *finalData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
