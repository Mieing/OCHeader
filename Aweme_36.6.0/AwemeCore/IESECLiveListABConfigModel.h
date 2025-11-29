@class NSString;

@interface IESECLiveListABConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long searchButtonStyle;
@property (nonatomic) long long cartAddEnhanceStyle;
@property (nonatomic) long long showAuthorConnect;
@property (nonatomic) BOOL useListProductCardDesign;
@property (nonatomic) BOOL instantShortBuyStyle;
@property (nonatomic) long long addCartToastDynamicOrder;
@property (nonatomic) long long addCartVanishDynamicStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
