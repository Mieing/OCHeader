@class NSString, NSArray;

@interface IESECGoodsDetailShopBusinessMetaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isStore;
@property (copy, nonatomic) NSString *shopLink;
@property (copy, nonatomic) NSString *shopAvatarLink;
@property (copy, nonatomic) NSString *shopProfileLink;
@property (copy, nonatomic) NSArray *shopCouponURLArray;
@property (copy, nonatomic) NSString *shopAuthorID;
@property (copy, nonatomic) NSArray *shopCouponTypeArray;
@property (copy, nonatomic) NSArray *shopCouponEntranceLocationArray;
@property (copy, nonatomic) NSString *shopRankList;
@property (copy, nonatomic) NSString *shopReputationLink;
@property (nonatomic) long long shopCouponIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
