@class NSString, NSArray;

@interface BDECPigeonMarkdownItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long rollbackType;
@property (copy, nonatomic) NSString *rollbackText;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
