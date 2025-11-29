@class NSString;

@interface IESECShopTagScrollConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double scrollSpeed;
@property (nonatomic) long long scrollStartDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
