@class NSNumber, NSString, AWEUserAccountCertInfoModel, AWEDetailActivityLinkModel, NSAttributedString, AWEDetailURLModel;

@interface AWEDetailUserProfileModel : AWEDetailCommonDiffableModel <AWEDetailRoutable>

@property (nonatomic) BOOL isSkeleton;
@property (retain, nonatomic) AWEDetailURLModel *avatarThumb;
@property (retain, nonatomic) AWEDetailURLModel *avatarMedium;
@property (copy, nonatomic) NSString *verifiedTitle;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSAttributedString *attrUserName;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL enableFollow;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSNumber *shouldHideVerifiedMark;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (nonatomic) BOOL shouldAddAvatarBorder;
@property (retain, nonatomic) AWEDetailActivityLinkModel *activityLinkModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)routeURLString;
- (void).cxx_destruct;

@end
