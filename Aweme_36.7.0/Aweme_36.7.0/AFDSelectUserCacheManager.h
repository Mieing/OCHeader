@class NSArray, NSMutableDictionary, NSSet, NSString;

@interface AFDSelectUserCacheManager : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSArray *dontShareTopList;
@property (copy, nonatomic) NSArray *partSeeTopList;
@property (retain, nonatomic) NSMutableDictionary *dontShareMap;
@property (retain, nonatomic) NSMutableDictionary *partSeeMap;
@property (copy, nonatomic) NSArray *commonFriendsList;
@property (copy, nonatomic) NSArray *commonFansList;
@property (copy, nonatomic) NSArray *commonCloseFriendsList;
@property (copy, nonatomic) NSArray *commonBidirectionFriendsList;
@property (copy, nonatomic) NSArray *commonMateList;
@property (copy, nonatomic) NSSet *dontLetOtherSeeUids;
@property (copy, nonatomic) NSSet *dontLetOtherSee24StoryUids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
