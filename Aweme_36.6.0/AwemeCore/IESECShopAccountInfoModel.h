@class IESECShopFollowConfigModel, NSString, IESECURLModel, IESECEntranceInformationModel, IESECShopFansClubModel;

@interface IESECShopAccountInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) IESECURLModel *avatarMedium;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL hideFollowButton;
@property (retain, nonatomic) IESECShopFollowConfigModel *followConfig;
@property (retain, nonatomic) IESECEntranceInformationModel *entranceInformation;
@property (retain, nonatomic) IESECShopFansClubModel *fansClubInfo;
@property (nonatomic) BOOL showInfoColumn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
