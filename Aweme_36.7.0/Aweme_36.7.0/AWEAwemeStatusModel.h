@class NSString, NSArray, AWEAwemeReviewResultNotice, AWEEditAwemeBarInfo, NSNumber, AWEAwemeVideoMuteModel;

@interface AWEAwemeStatusModel : AWEBaseApiModel

@property (readonly, nonatomic) BOOL hasGoods;
@property (nonatomic) BOOL allowShare;
@property (nonatomic) BOOL allowComment;
@property (readonly, nonatomic) NSString *itemID;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL allowFriendRecommend;
@property (readonly, nonatomic) BOOL allowSelfRecommendToFriend;
@property (readonly, nonatomic) BOOL allowFriendRecommendGuide;
@property (readonly, nonatomic) BOOL hasFusionGoods;
@property (nonatomic) BOOL enableSoftDelete;
@property (nonatomic) BOOL disableSoftRecovery;
@property (retain, nonatomic) NSNumber *softExpireTime;
@property (nonatomic) long long deleteStatus;
@property (readonly, nonatomic) long long privacyPanelVersion;
@property (nonatomic) unsigned long long userStatusFiltered;
@property (nonatomic) long long privateUserStatus;
@property (nonatomic) unsigned long long privacyType;
@property (readonly, nonatomic) BOOL isHidefriendReviewInfo;
@property (readonly, nonatomic) BOOL inReviewing;
@property (nonatomic) BOOL isReviewed;
@property (nonatomic) BOOL isSelfSeeing;
@property (nonatomic) BOOL isProhibited;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) long long audioEditStatus;
@property (retain, nonatomic) AWEAwemeVideoMuteModel *videoMuteModel;
@property (nonatomic) long long publishExclusionStatus;
@property (nonatomic) BOOL isHideSearch;
@property (nonatomic) unsigned long long partOfVisibleStatus;
@property (nonatomic) long long downgradeUserStatus;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isPartOfVisible;
@property (readonly, nonatomic) BOOL isCloseFriends;
@property (readonly, nonatomic) BOOL isFriendVisible;
@property (readonly, nonatomic) BOOL isNotPublic;
@property (readonly, nonatomic) BOOL isPublishExclusion;
@property (readonly, nonatomic) AWEAwemeReviewResultNotice *reviewResult;
@property (nonatomic) BOOL isNeedDrawBack;
@property (nonatomic) long long listenVideoStatus;
@property (nonatomic) BOOL canShowSendIMToastAfterPublish;
@property (retain, nonatomic) NSArray *exclusionSecUidList;
@property (nonatomic) BOOL isEnterByIMPublishAtFriends;
@property (nonatomic) unsigned long long imQuoteReplyType;
@property (retain, nonatomic) AWEEditAwemeBarInfo *awemeEditInfo;

+ (id)reviewResultJSONTransformer;
+ (id)privacyPanelVersionJSONTransformer;
+ (id)privateUserStatusJSONTransformer;
+ (id)downloadTypeJSONTransformer;
+ (id)muteVideoModelJSONTransformer;
+ (id)awemeEditInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)forcePublicStatus;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
