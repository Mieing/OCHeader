@class NSString, IESLiveECCartAbilityConfig;

@interface IESLiveECRoomCart : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showCart;
@property (retain, nonatomic) IESLiveECCartAbilityConfig *vertical;
@property (retain, nonatomic) IESLiveECCartAbilityConfig *horizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)horizontalJSONTransformer;
+ (id)verticalJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
