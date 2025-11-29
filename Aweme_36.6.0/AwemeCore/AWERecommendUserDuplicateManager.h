@class NSString, NSMutableDictionary;

@interface AWERecommendUserDuplicateManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *userMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)clearAllUsers;
- (void)markUserAsShownWithBusinessID:(id)a0 userID:(id)a1 feedType:(long long)a2;
- (BOOL)checkHasShownUserWithBusinessID:(id)a0 userID:(id)a1 exceptFeedType:(long long)a2;
- (void)p_mateReportRate:(long long)a0 userID:(id)a1;
- (BOOL)shouldCheckUserHasShownForCard:(id)a0;
- (void)recordUserWithBusinessID:(id)a0 userID:(id)a1 feedType:(long long)a2;
- (id)getAllUserIDsWithBusinessID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
