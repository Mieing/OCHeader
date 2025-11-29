@interface AWEStudioIMBubbleManager : NSObject

+ (BOOL)shouldShowSyncToFriendsBubble:(long long)a0;
+ (void)markDidShownSyncToFriendsBubble;
+ (BOOL)shouldShowWatchOnceBubble:(long long)a0;
+ (void)markDidShownWatchOnceBubble;

@end
