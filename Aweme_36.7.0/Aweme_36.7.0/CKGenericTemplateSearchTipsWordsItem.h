@class NSString;

@interface CKGenericTemplateSearchTipsWordsItem : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
