@class NSString, NSArray, NSDictionary;

@interface AFDPrivacyPublishCacheParamsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long privacyPermissionType;
@property (nonatomic) unsigned long long privacyType;
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
@property (copy, nonatomic) NSArray *friendsRelativeList;
@property (nonatomic) BOOL isMateSelected;
@property (nonatomic) BOOL isMateAndDontShareSelected;
@property (copy, nonatomic) NSArray *mateDontShareUserList;
@property (copy, nonatomic) NSArray *mateRelativeList;
@property (nonatomic) BOOL isHideSearch;
@property (nonatomic) BOOL isPaymentVideo;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)exclusionUserListJSONTransformer;
+ (id)partOfVisibleUsersJSONTransformer;
+ (id)friendsDontShareUsersJSONTransformer;
+ (id)mateDontShareUserListJSONTransformer;

- (id)initWithParamsModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
