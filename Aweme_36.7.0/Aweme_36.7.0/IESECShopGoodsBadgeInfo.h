@class NSString;

@interface IESECShopGoodsBadgeInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showBadge;
@property (copy, nonatomic) NSString *badgeMessage;
@property (copy, nonatomic) NSString *clientStoreParameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
