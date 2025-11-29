@class NSString;

@interface AWEIMCommerceShopGuideInfo : AWEBaseApiModel <AWEIMCommerceShopGuideInfoProtocol>

@property (copy, nonatomic) NSString *shopGuideId;
@property (nonatomic) BOOL isShopGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
