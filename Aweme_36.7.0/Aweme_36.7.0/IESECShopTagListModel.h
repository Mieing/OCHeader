@class NSArray, NSString, IESECShopTagListUIConfig, NSDictionary, IESECShopClickAction;

@interface IESECShopTagListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *tagContainers;
@property (retain, nonatomic) IESECShopTagListUIConfig *listUI;
@property (nonatomic) long long overLengthStrategy;
@property (nonatomic) long long containerShowMax;
@property (copy, nonatomic) NSString *showEventName;
@property (copy, nonatomic) NSString *clickEventName;
@property (copy, nonatomic) NSDictionary *showEventParams;
@property (copy, nonatomic) NSDictionary *clickEventParams;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECShopClickAction *clickAction;
@property (nonatomic) BOOL needInnerConstraint;
@property (nonatomic) BOOL needScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagContainersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
