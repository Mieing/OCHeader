@interface AWEShareAwemeTracker : NSObject

+ (void)trackMiniSharePlatfromIconWithContext:(id)a0 sharePlatform:(id)a1;
+ (void)trackShareDetailWithContext:(id)a0 sharePlatform:(id)a1;
+ (void)trackShareVideoWithContext:(id)a0 shareModel:(id)a1 extraParams:(id)a2;
+ (void)trackAdShareEventWithContext:(id)a0;
+ (void)trackLiveSharePanelHeadClickWithContext:(id)a0 shareModel:(id)a1 extraParams:(id)a2;
+ (id)generateCommomParamsWithShareModel:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
+ (void)trackShareTextClickWithContext:(id)a0;
+ (void)trackShareChannelShowWithTask:(id)a0;
+ (void)trackShareVideoSuccessWithContext:(id)a0;
+ (void)trackExitMoreButtonWithContext:(id)a0 extraParams:(id)a1;
+ (void)trackShareRecentlyChatShowWithShareList:(id)a0;
+ (void)trackAddFriendsWithActionType:(id)a0;
+ (void)trackCommonShowWithContext:(id)a0 functionName:(id)a1 firstScreenShow:(BOOL)a2;
+ (void)trackCommonClickWithContext:(id)a0 functionName:(id)a1 firstScreenShow:(BOOL)a2;
+ (void)trackIMGroupFriendShareClickWithContext:(id)a0 model:(id)a1 platform:(id)a2;
+ (void)trackShareEmojiWithContext:(id)a0 platform:(id)a1;
+ (void)trackShareEmojiSuccessWithContext:(id)a0 platform:(id)a1;

@end
