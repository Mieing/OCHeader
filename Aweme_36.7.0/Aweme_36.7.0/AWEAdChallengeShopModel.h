@class NSString;

@interface AWEAdChallengeShopModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopSchema;
@property (copy, nonatomic) NSString *shopLogo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
