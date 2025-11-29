@class NSString, NSDictionary;

@interface IESLivePBUniformModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *openProperty;
@property (copy, nonatomic) NSString *openType;
@property (copy, nonatomic) NSString *openNumber;
@property (copy, nonatomic) NSString *mainProperty;
@property (copy, nonatomic) NSString *mainType;
@property (copy, nonatomic) NSString *mainNumber;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
