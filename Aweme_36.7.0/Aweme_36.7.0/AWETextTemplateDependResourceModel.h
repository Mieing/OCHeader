@class NSString;

@interface AWETextTemplateDependResourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *panelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
