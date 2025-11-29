@class NSString, NSArray, AWEAwemeModel, AWEVideoPublishViewModel, NSDictionary;

@interface AFDPrivacyPublishParamsModel : NSObject

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isReedit;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) long long privacyPermissionType;
@property (nonatomic) unsigned long long privacyType;
@property (nonatomic) long long xiguaPrivacyType;
@property (readonly, nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL isPartFriendShow;
@property (nonatomic) BOOL isCloseFriendShow;
@property (nonatomic) BOOL isFriendShow;
@property (nonatomic) BOOL isPublishExclusionSelected;
@property (copy, nonatomic) NSArray *exclusionSecUidList;
@property (copy, nonatomic) NSArray *exclusionUserList;
@property (nonatomic) BOOL isPartOfVisibleSelected;
@property (copy, nonatomic) NSArray *partOfVisibleUsers;
@property (nonatomic) BOOL isCloseFriendsSelected;
@property (copy, nonatomic) NSArray *friendsDontShareUsers;
@property (copy, nonatomic) NSArray *friendsDontShareUidList;
@property (copy, nonatomic) NSArray *friendsRelativeList;
@property (nonatomic) BOOL isMateSelected;
@property (nonatomic) BOOL isMateAndDontShareSelected;
@property (copy, nonatomic) NSArray *mateDontShareUserList;
@property (copy, nonatomic) NSArray *mateDontShareUidList;
@property (copy, nonatomic) NSArray *mateRelativeList;
@property (nonatomic) BOOL isHideSearch;
@property (nonatomic) BOOL isPaymentVideo;
@property (copy, nonatomic) NSDictionary *publishTrackExtra;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)initWithCacheParamsModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
