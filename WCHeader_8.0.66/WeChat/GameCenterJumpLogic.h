@interface GameCenterJumpLogic : NSObject

+ (unsigned long long)opWithJumpInfo:(id)a0;
+ (void)jumpWithJumpInfo:(id)a0;
+ (void)handleNativeJumpInfo:(id)a0;
+ (void)preloadWebViewWithJumpInfo:(id)a0 reuseIdentifier:(id)a1;
+ (void)preloadWebViewWithJumpInfo:(id)a0 reuseIdentifier:(id)a1 reCreateAfterUsed:(BOOL)a2;
+ (id)gcJumpWithJumpInfo:(id)a0 reuseIdentifier:(id)a1 additionalInfo:(id)a2 fromVc:(id)a3 onCloseBlock:(id /* block */)a4;
+ (id)jumpWithJumpInfo:(id)a0 reuseIdentifier:(id)a1 additionalInfo:(id)a2 fromVc:(id)a3 onCloseBlock:(id /* block */)a4;
+ (BOOL)isJumpInfoHalfScreen:(id)a0;
+ (void)handleGcJumpInfo:(id)a0;
+ (id)handleHalfScreenWebVcJump:(id)a0;
+ (id)openWebviewControllerWithUrl:(id)a0;
+ (id)openWebviewControllerWithUrl:(id)a0 popCurrentVc:(BOOL)a1 disableLiteMatch:(BOOL)a2 openInfo:(id)a3 checkLimitedMode:(BOOL)a4;
+ (void)pushViewController:(id)a0;
+ (void)pushViewController:(id)a0 animated:(BOOL)a1;
+ (void)openCreateGroupViewController;
+ (void)openMoreRecommendGroupViewController:(id)a0;
+ (void)openChatRoomViewController:(id)a0;
+ (void)openChatRoomFromImageView:(id)a0 config:(id)a1;
+ (BOOL)enableOldAnimation;
+ (void)openChatRoomWithChatRoomConfig:(id)a0;
+ (id)getImageViewCopyFromCoverImgView:(id)a0;
+ (void)openChatRoomAnimationWithChatRoomConfig:(id)a0;
+ (void)openGroupInfoView:(id)a0;
+ (void)openAllMemberView:(id)a0;
+ (id)personalProfileUrlWithUserName:(id)a0;
+ (id)nameCardCreateUrl;
+ (id)urlWithPath:(id)a0 key:(id)a1 value:(id)a2;
+ (id)getChildWebVcWithUrl:(id)a0 isPreload:(BOOL)a1 preinjectData:(id)a2 checkLimitedMode:(BOOL)a3;
+ (id)getTransparentWebViewController:(id)a0 isPreload:(BOOL)a1 preinjectData:(id)a2 checkLimitedMode:(BOOL)a3;
+ (void)jumpToMiniProgram:(id)a0 path:(id)a1 viewController:(id)a2;
+ (BOOL)quitChatRoomFromWebVc:(id)a0 chatRoomName:(id)a1;
+ (BOOL)openCreateGroup:(id)a0;
+ (id)currentNavi;
+ (id)getGameChatVcWithReportParam:(id)a0 sourceScene:(unsigned int)a1;
+ (id)getGameChatVcWithConfig:(id)a0;
+ (BOOL)openNewMessageViewController;
+ (void)jumpWithGameJumpInfo:(id)a0;

@end
