@class NSArray, NSDictionary, NSString;

@interface AWEDPSchemaEntryFilter : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *includes;
@property (retain, nonatomic) NSArray *excludes;
@property (retain, nonatomic) NSDictionary *paramValidator;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramValidatorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)validate:(id)a0;

@end
