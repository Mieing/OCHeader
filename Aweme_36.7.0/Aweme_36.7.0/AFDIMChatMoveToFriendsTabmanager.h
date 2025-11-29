@class NSMutableDictionary, NSString, NSObject, AFDIMChatMoveToFriendsSettings;
@protocol OS_dispatch_queue;

@interface AFDIMChatMoveToFriendsTabmanager : NSObject <AWEUserMessage, AFDIMChatMoveToFriendsTabManagerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setToDiskCacheSerialQueue;
@property (retain, nonatomic) NSMutableDictionary *limitDic;
@property (nonatomic) BOOL isDissmisByClick;
@property (nonatomic) BOOL isDissmisByClickFriendTab;
@property (nonatomic) long long leaveFriendTabUnreadCount;
@property (nonatomic) BOOL shouldEnterShow;
@property (nonatomic) BOOL isBubbleTryingShow;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL needTryShowBubbleAlert;
@property (retain, nonatomic) AFDIMChatMoveToFriendsSettings *chatSettings;
@property (nonatomic) long long lastChatCount;
@property (nonatomic) BOOL isLogout;
@property (nonatomic) BOOL isSkylightShow;
@property (nonatomic) BOOL hasSkylightInit;
@property (nonatomic) BOOL isAvatarViewShow;
@property (nonatomic) BOOL isWaitingInvoke;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)markShouldEnterShowWhenLeaveFriendsTabIfNeeded;
- (void)updateLimit;
- (void)setCurrentLimitModel:(id)a0;
- (BOOL)meetCondition;
- (void)markSuccessShow;
- (void)markClick;
- (void)markDismiss;
- (void)markEnterFriendTab;
- (void)markShouldEnterShowWithNewUnreadCount:(long long)a0;
- (void)clearShouldEnterShow;
- (BOOL)canChatBubbleShow;
- (void).cxx_destruct;
- (id)init;
- (void)log:(id)a0;
- (void)dealloc;
- (id)currentUserID;

@end
