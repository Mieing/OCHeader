@class AWEIMLifeServiceChatMenuShortModel, NSString, NSArray, NSNumber, AWEIMPlatformChatPanelModel;

@interface AWEIMServiceComponentItemConfig : MTLModel <MTLJSONSerializing>

@property (retain) NSNumber *priority;
@property (copy) NSString *componentId;
@property long long componentType;
@property (copy) NSString *componentGroup;
@property long long operation;
@property (copy) NSString *scene;
@property BOOL ignorePriorityOnDiff;
@property (copy) NSArray *exitConfigs;
@property (retain) AWEIMLifeServiceChatMenuShortModel *menuItemConfig;
@property (retain) AWEIMPlatformChatPanelModel *plusPanelConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)exitConfigsJSONTransformer;
+ (id)menuItemConfigJSONTransformer;
+ (id)plusPanelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
