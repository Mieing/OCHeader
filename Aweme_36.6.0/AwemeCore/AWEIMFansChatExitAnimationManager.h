@class AWEIMChatModel;

@interface AWEIMFansChatExitAnimationManager : NSObject

@property (retain, nonatomic) AWEIMChatModel *cachedChatModel;
@property (retain, nonatomic) AWEIMChatModel *movedHintChatModel;
@property (nonatomic) double animationDuration;

+ (id)sharedInstance;

- (void)onChatListVCWillAppear;
- (void)cacheMovedHint;
- (void)showAnimationIfNecessary;
- (BOOL)hasCachedChatModel;
- (void)p_updateUnreadCountWhenBackToChatList;
- (void).cxx_destruct;
- (id)init;

@end
