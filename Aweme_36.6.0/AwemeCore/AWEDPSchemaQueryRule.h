@class NSArray, NSDictionary, NSString;

@interface AWEDPSchemaQueryRule : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *includes;
@property (retain, nonatomic) NSArray *excludes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)validateQueryVal:(id)a0;
- (void).cxx_destruct;

@end
