@class IESECURLModel, NSArray, IESECHeartDiamondCrownModel, NSString, IESECShopFansClubModel, IESECShopTagListModel, IESECShopHeaderStyleConfigModel, IESECShopDisplayNameInfo;

@interface IESECShopLiveTabInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopDisplayNameInfo *shopDisplayName;
@property (retain, nonatomic) IESECURLModel *shopLogo;
@property (copy, nonatomic) NSArray *tagList;
@property (retain, nonatomic) IESECShopTagListModel *reputationTagList;
@property (retain, nonatomic) IESECShopHeaderStyleConfigModel *headerStyleConfig;
@property (retain, nonatomic) IESECHeartDiamondCrownModel *heartDiamondCrownModel;
@property (copy, nonatomic) NSArray *shopSellingPointContents;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL hideFollowButton;
@property (retain, nonatomic) IESECShopFansClubModel *fansClubInfo;
@property (copy, nonatomic) NSString *liveVisitorNumberText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagListJSONTransformer;
+ (id)shopSellingPointContentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
