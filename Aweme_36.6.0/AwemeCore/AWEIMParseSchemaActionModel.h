@class NSString, NSDictionary;

@interface AWEIMParseSchemaActionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *targetSchema;
@property (retain, nonatomic) NSDictionary *extraInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
