@class NSString, NSArray, IESECLiveGoodsListAuthorShopAvatarModel, IESECLiveGoodsListAuthorShopTitleIconInfo, NSDictionary, IESECLiveGoodsListAuthorReputationModel, IESECLiveEtaModel, NSNumber;

@interface IESECLiveGoodsListAuthorShopInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSArray *shopTags;
@property (retain, nonatomic) IESECLiveGoodsListAuthorReputationModel *shopReputation;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopAvatarModel *shopAvatar;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopTitleIconInfo *titleIconInfo;
@property (retain, nonatomic) IESECLiveEtaModel *eta;
@property (retain, nonatomic) NSArray *userActParams;
@property (retain, nonatomic) NSDictionary *trackEventParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shopTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
