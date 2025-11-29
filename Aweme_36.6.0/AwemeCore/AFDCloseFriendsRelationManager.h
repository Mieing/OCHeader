@class NSArray, AWESocialRelationObserver, NSMutableSet, NSString, NSLock;
@protocol IESLCMessageHandlerProtocol;

@interface AFDCloseFriendsRelationManager : NSObject <AWEUserMessage, IESLCMessageHandlerService, AFDCloseFriendsRelationManagerProtocol>

@property (retain, nonatomic) NSArray *reverseCloseFriendList;
@property (retain, nonatomic) NSArray *forwardCloseFriendList;
@property (retain, nonatomic) NSMutableSet *blurMaskLocalMockCloseFriends;
@property (retain, nonatomic) NSMutableSet *blurMaskLocalMockReverseCloseFriends;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) AWESocialRelationObserver *mateStatusObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (void)setSettingsWithUserID:(id)a0 type:(long long)a1 completionBlock:(id /* block */)a2;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)removeForwardCloseFriendsWithUIDs:(id)a0;
- (void)closeFriendsWithUser:(id)a0 sourcePage:(long long)a1 completion:(id /* block */)a2;
- (id)getCloseFriendsListWithUids;
- (BOOL)userIsCloseFriends:(id)a0;
- (void)handleSettingsResponseDictionary:(id)a0 fromLogin:(BOOL)a1;
- (long long)getCloseFriendsStatusWithUserID:(id)a0;
- (long long)fakeGenerateButtonStatusAfterClick:(long long)a0;
- (long long)getReverseCloseFriendsEstablishTimeWithUserID:(id)a0;
- (long long)getForwardCloseFriendsEstablishTimeWithUserID:(id)a0;
- (void)updateSingleCloseFriendWithUserID:(id)a0 status:(long long)a1;
- (id)currentUserKeyWithOriginKey:(id)a0;
- (void)updateBizAccountDegradeWithTime:(long long)a0;
- (BOOL)checkReachedCloseFriendsCountLimit:(id)a0;
- (void)sendRemoveCloseFriendsMessage:(id)a0;
- (void)postRelationWillChangeWithUserID:(id)a0;
- (void)p_didSetCloseFriendsUsingResponse:(id)a0 error:(id)a1 userID:(id)a2 showToast:(BOOL)a3 completion:(id /* block */)a4;
- (void)postRelationDidChangeWithUserID:(id)a0;
- (void)updateCloseFriendsRelationByForwardArray:(id)a0;
- (void)updateCloseFriendsRelationByReverseArray:(id)a0;
- (void)p_reloadSKIIOnboardingTimestamp;
- (void)p_updateSKIIOnboardingWithTime:(long long)a0;
- (id)getForwardCloseFriendsListWithUids;
- (id)getReverseCloseFriendsListWithUids;
- (void)patchUpdateCloseFriendIDList:(id)a0;
- (void)addReverseCloseFriendsWithUID:(id)a0;
- (void)addForwardCloseFriendsWithUID:(id)a0;
- (void)removeReverseCloseFriendsWithUIDs:(id)a0;
- (void)blurMaskRemoveLocalMockCloseFriendWithUserID:(id)a0;
- (void)updateSKIIConfigWithSettingsDictionary:(id)a0 fromColdLaunch:(BOOL)a1;
- (void)fetchLastestCloseFriendsInfo:(BOOL)a0;
- (void)removeCloseFriendsWithUser:(id)a0 sourcePage:(long long)a1 completion:(id /* block */)a2;
- (void)blurMaskLocalMockCloseFriendWithUserID:(id)a0;
- (BOOL)blurMaskContainsLocalMockCloseFriendWithUserID:(id)a0;
- (id)getMutualCloseFriendsListWithUids;
- (void)updateCloseFriendWithselectedUsers:(id)a0 Completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
