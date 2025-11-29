@class NSArray, NSMutableDictionary, NSString;

@interface AWEIMFansAndRecommendManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSArray *userIDs;
@property (retain, nonatomic) NSMutableDictionary *operationDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishRejectUserFollowRequestWithNoticeID:(id)a0 user:(id)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (id)cacheModelForUID:(id)a0;
- (void)updateFromUserIDs:(id)a0;
- (id)getCacheModelOperationDic;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
