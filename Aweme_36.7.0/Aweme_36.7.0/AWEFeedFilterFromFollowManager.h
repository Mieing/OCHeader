@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWEFeedFilterFromFollowManager : NSObject <AWEUserMessage, AWEFeedFilterFromFollowManagerProtocol>

@property (retain, nonatomic) NSMutableSet *itemSet;
@property (retain, nonatomic) NSMutableDictionary *friendReadMap;
@property (retain, nonatomic) NSMutableSet *friendReadRecommendSet;
@property (retain, nonatomic) NSMutableSet *friendReadHistorySet;
@property (retain, nonatomic) NSMutableSet *feedFriendReadSet;
@property (nonatomic) BOOL needReloadFriendReadMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isFriendDuplicate:(id)a0;
- (void)trackForFriendDuplicateWithPage:(id)a0 comeFrom:(id)a1 duplicateID:(id)a2 awemeType:(long long)a3;
- (void)setFriendsReadToDiskWithModel:(id)a0;
- (void)recordFeedFriendReadItem:(id)a0;
- (void)updateFriendReadIfNeeded;
- (BOOL)isNeedDetect;
- (BOOL)isFamiliarFeedNeedDetect;
- (void)recordFollowPlayedItem:(id)a0;
- (void)recordFriendPlayedItem:(id)a0;
- (void)recordFriendPlayedHistoryItem:(id)a0;
- (void)recordFriendPlayedRecommendItem:(id)a0;
- (void)trackForFriendDuplicateInFeedWithPage:(id)a0 groupID:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDuplicate:(id)a0;
- (void)resetData;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
