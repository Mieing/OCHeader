@class NSString, NSArray;

@interface CKGenericTemplateMapResponse : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) BOOL hasNext;
@property (readonly, nonatomic) NSString *reqId;
@property (readonly, copy, nonatomic) NSArray *templates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)addRecId;
- (void).cxx_destruct;

@end
