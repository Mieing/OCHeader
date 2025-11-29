@class NSString;

@interface AFDRecommendToFriendDataService : NSObject <AFDRecommendToFriendDataServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)cacheService;
- (void)changeAwemeSelfRecommendStatus:(BOOL)a0 withContext:(id)a1;
- (void)handleForAwemeFamiliarRecommend:(id)a0 withInfoDict:(id)a1;
- (void)preprocessDataWithModel:(id)a0 context:(id)a1;
- (BOOL)canRecommendAweme:(id)a0;
- (BOOL)canRecommendAwemeBasicCondition:(id)a0;
- (void)reportRecommendUserListDataLossWithModel:(id)a0;
- (void)syncRecommendStatusForModel:(id)a0;
- (void)filterUserListForAwemeModel:(id)a0;
- (BOOL)shouldMockRecommendLabelWhenSelfRecommendWithModel:(id)a0 referString:(id)a1;
- (void)mockRecommendLabelWithModel:(id)a0;
- (void)removeMyUserInfoToAwemeModel:(id)a0;
- (void)addMyUserInfoToAwemeModel:(id)a0;
- (void)recommendAwemeWithContext:(id)a0;
- (void)cancelRecommendAwemeIfNeedWithContext:(id)a0;
- (void)recordChangeAwemeSelfRecommendStatusWithModel:(id)a0;
- (void)updateRecommendStatusForModel:(id)a0;
- (void)postAwemeSelfRecommendStatusChangeNoti:(BOOL)a0 WithAwemeModel:(id)a1;
- (BOOL)shouldShowCancelRecommendDoubleCheckAlertWithModel:(id)a0;
- (void)showCancelRecommendDoubleCheckAlertWithContext:(id)a0;
- (void)cancelRecommendAwemeWithContext:(id)a0;
- (void)reportCancelRecommendPostscriptWithContext:(id)a0;
- (void)syncRecommendData:(id)a0 withUserList:(id)a1;

@end
