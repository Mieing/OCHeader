@class NSString, NSDictionary;

@interface AWECodeGenAwemeStatusModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) BOOL allowShare;
@property (nonatomic) BOOL allowComment;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL withGoods;
@property (nonatomic) int privateStatus;
@property (nonatomic) BOOL withFusionGoods;
@property (nonatomic) BOOL inReviewing;
@property (nonatomic) int reviewed;
@property (nonatomic) BOOL selfSee;
@property (nonatomic) BOOL isProhibited;
@property (nonatomic) long long downloadStatus;
@property (copy, nonatomic) NSDictionary *reviewResult;
@property (nonatomic) int musicEditStatus;
@property (nonatomic) int dontShareStatus;
@property (nonatomic) int videoHideSearch;
@property (copy, nonatomic) NSDictionary *videoMute;
@property (copy, nonatomic) NSDictionary *awemeEditInfo;
@property (nonatomic) BOOL reviewedFriendSee;
@property (nonatomic) int partSee;
@property (nonatomic) long long itemVersion;
@property (nonatomic) long long listenVideoStatus;
@property (nonatomic) BOOL allowFriendRecommend;
@property (nonatomic) BOOL allowSelfRecommendToFriend;
@property (nonatomic) BOOL allowFriendRecommendGuide;
@property (nonatomic) BOOL yummeHitN1;
@property (nonatomic) long long userStatus;
@property (nonatomic) int userStatusFiltered;
@property (nonatomic) int privacyPanelVersion;
@property (nonatomic) long long downgradeUserStatus;
@property (nonatomic) int deleteStatus;
@property (nonatomic) long long softExpireTime;
@property (nonatomic) int enableSoftDelete;
@property (copy, nonatomic) NSString *notAllowSoftDelReason;
@property (copy, nonatomic) NSString *notAllowSoftRecoveryReason;
@property (nonatomic) int disableSoftRecovery;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
