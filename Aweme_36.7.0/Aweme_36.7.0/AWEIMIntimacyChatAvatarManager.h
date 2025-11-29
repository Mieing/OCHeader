@class NSString, NSHashTable, NSURL, NSObject, AWEIMChatModel;
@protocol OS_dispatch_semaphore;

@interface AWEIMIntimacyChatAvatarManager : NSObject <AWEUserMessage, AWEIMIntimacyChatAvatarProtocol>

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lisenterLock;
@property (retain, nonatomic) AWEIMChatModel *maxIntimacyChat;
@property (retain, nonatomic) NSURL *avatarUrl;
@property (nonatomic) BOOL isShowingSkylight;
@property (nonatomic) double lastUpdateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isShowingAvatar;
- (void)resignListener:(id)a0;
- (void)__lockListeners;
- (void)__unlockListeners;
- (void)handleTabBarChangeNotification:(id)a0;
- (void)handleEnterBackgroundNotification:(id)a0;
- (void)__tryGetUnreadIntimacyCon;
- (void)__updateAllListenersWithNewAvatarUrl:(id)a0;
- (void)__clearMaxIntimacyChat;
- (void)__getIntimacyChatWhenUpdateCompleted;
- (void)__updateMaxIntimacyConWithResultArray:(id)a0;
- (void)hideAvatarForSkylightShowing;
- (void)showAvatarForSkylightClosing;
- (void)chatsDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerListener:(id)a0;

@end
