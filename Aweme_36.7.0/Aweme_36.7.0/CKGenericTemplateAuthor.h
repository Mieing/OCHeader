@class CKGenericTemplateUrlModel, NSString;

@interface CKGenericTemplateAuthor : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) CKGenericTemplateUrlModel *urlModel;
@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
