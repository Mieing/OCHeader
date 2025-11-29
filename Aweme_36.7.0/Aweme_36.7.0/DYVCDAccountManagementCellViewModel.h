@class NSString, DYAVCDAccountModel;

@interface DYVCDAccountManagementCellViewModel : NSObject

@property (retain, nonatomic) DYAVCDAccountModel *accountModel;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *appIcon;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) BOOL isFresh;
@property (nonatomic) BOOL hasUnreadNotices;
@property (nonatomic) double lastestNoticeTimeStamp;
@property (nonatomic) long long fansCount;
@property (nonatomic) long long friendsCount;
@property (nonatomic) BOOL isSecretAccount;
@property (nonatomic) BOOL isBlueVerify;
@property (nonatomic) BOOL isYellowVerify;
@property (nonatomic) BOOL isHotsoon;
@property (nonatomic) BOOL isFromLocal;
@property (nonatomic) BOOL isBusinessAccountOperator;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (readonly, copy, nonatomic) NSString *switchAccountType;

+ (id)instanceWithAccountModel:(id)a0 isSelected:(BOOL)a1;
+ (id)appIconFromModel:(id)a0;
+ (id)appNameFromModel:(id)a0;

- (void)commitSelectionState:(BOOL)a0;
- (void).cxx_destruct;

@end
