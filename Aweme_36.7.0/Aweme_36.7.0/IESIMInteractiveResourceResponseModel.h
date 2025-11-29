@class NSString, NSArray, AWEIMEmoticonInfoAnimateIconModel, NSDictionary;

@interface IESIMInteractiveResourceResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSArray *interactiveResources;
@property (copy, nonatomic) NSArray *specialResources;
@property (retain, nonatomic) AWEIMEmoticonInfoAnimateIconModel *animateIcon;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)interactiveResourcesJSONTransformer;
+ (id)specialResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSpecialResourceAvaliable:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
