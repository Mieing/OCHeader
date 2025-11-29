@class NSString, AWEUserCommercePermissionModel, NSArray, AWEProfileHeaderContext, AWEUserModel, AWEProfileCoverInfoModel, AWEFeature, AWECommerceModel;
@protocol AWEEnterpriseUserInfoProtocol;

@interface AWEProfileCompanyBannerViewModel : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEProfileHeaderContext *data;
@property (retain, nonatomic) AWEFeature<AWEEnterpriseUserInfoProtocol> *userInfoFeature;
@property (nonatomic) BOOL isNeedHiddenAtticTips;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSString *creativeID;
@property (retain, nonatomic) AWEProfileCoverInfoModel *coverAndHeadImageInfo;
@property (readonly, nonatomic) NSString *atticInfoImgUri;
@property (readonly, nonatomic) BOOL hasHeadImagePermission;
@property (readonly, nonatomic) BOOL enableEproject;
@property (readonly, nonatomic) NSArray *coverUrlList;
@property (readonly, nonatomic) NSArray *headerImageUrlModels;
@property (readonly, nonatomic) NSString *eProjectcoverTransferUrl;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSString *atticInfoIronManUrl;
@property (readonly, nonatomic) BOOL isCompanyProfile;
@property (readonly, nonatomic) AWEUserCommercePermissionModel *commercePermission;
@property (readonly, nonatomic) AWECommerceModel *commerceModel;
@property (readonly, nonatomic) AWEUserModel *userModel;
@property (readonly, nonatomic) BOOL fromHomepage;

+ (id)viewModelWithData:(id)a0;

- (void)configAwemeModel:(id)a0;
- (void)_processData;
- (void).cxx_destruct;
- (id)initWithUserData:(id)a0;

@end
