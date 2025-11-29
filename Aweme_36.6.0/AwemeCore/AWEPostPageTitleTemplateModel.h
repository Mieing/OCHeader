@class NSString;

@interface AWEPostPageTitleTemplateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertToContentBySdkExtra:(id)a0;
+ (id)convertToTagByExtraInfo:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithEffectModel:(id)a0;
- (void).cxx_destruct;

@end
