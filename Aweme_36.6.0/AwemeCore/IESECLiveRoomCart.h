@class IESECLiveCartAbilityConfig, IESECLiveCartIconConfig, NSString;

@interface IESECLiveRoomCart : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showCart;
@property (retain, nonatomic) IESECLiveCartAbilityConfig *vertical;
@property (retain, nonatomic) IESECLiveCartAbilityConfig *horizontal;
@property (retain, nonatomic) IESECLiveCartIconConfig *activityIcons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityIconsJSONTransformer;
+ (id)horizontalJSONTransformer;
+ (id)verticalJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
