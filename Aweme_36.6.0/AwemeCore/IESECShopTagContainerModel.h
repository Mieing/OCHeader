@class NSArray, NSString, IESECShopTagContainerUIConfigModel, NSDictionary, IESECShopClickAction;

@interface IESECShopTagContainerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *subTags;
@property (retain, nonatomic) IESECShopTagContainerUIConfigModel *containerUI;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *showEventName;
@property (copy, nonatomic) NSString *clickEventName;
@property (copy, nonatomic) NSDictionary *showEventParams;
@property (copy, nonatomic) NSDictionary *clickEventParams;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECShopClickAction *clickAction;
@property (nonatomic) double fixedWidth;
@property (retain, nonatomic) NSString *tagType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
