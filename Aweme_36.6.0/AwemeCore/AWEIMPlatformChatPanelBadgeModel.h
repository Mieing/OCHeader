@class NSString, NSArray;

@interface AWEIMPlatformChatPanelBadgeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *exitConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)exitConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
