@class NSString, CECPublishPrivacyPermissionModel;

@interface CECPublishPrivacyRequestModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *requestStatusMsg;
@property (nonatomic) BOOL postNewMoment;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *publicModel;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *friendsModel;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *closeFriendsModel;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *partFriendModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
