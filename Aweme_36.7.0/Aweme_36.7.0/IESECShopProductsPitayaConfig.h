@class NSString;

@interface IESECShopProductsPitayaConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long timeInterval;
@property (nonatomic) BOOL enabledUserBehaviorParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
