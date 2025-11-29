@interface AWERecommendToFriendSwiftImpl.AFDRecommendPostscriptManager : NSObject <AFDRecommendPostscriptManagerProtocol>

+ (void)showRecommendToFriendInputPanel:(id)a0 aweme:(id)a1;
+ (void)showRecommendToFriendBrowsePanel:(id)a0 user:(id)a1;
+ (void)didShowRecommendToFriendInputPanel;
+ (BOOL)recommendPanelEnablePostscript;
+ (BOOL)recommendPanelEnableVisitPostscript;
+ (BOOL)canShowPostscriptTextWith:(id)a0 awemeModel:(id)a1;
+ (BOOL)canShowBubblePostscriptTextWith:(id)a0 awemeModel:(id)a1;
+ (id)itemBubbleModelWithUserModel:(id)a0 awemeModel:(id)a1;
+ (id)subtitleTextWith:(id)a0 awemeModel:(id)a1;
+ (id)itemTextModelWithUserModel:(id)a0 awemeModel:(id)a1;
+ (BOOL)canShowSubtitlePostscriptTextWithUserModel:(id)a0 awemeModel:(id)a1;
+ (id)subtitlePostscriptTextWithUserID:(id)a0 awemeModel:(id)a1 eventPreNode:(id)a2;
+ (id)currentUserPostscriptTextWith:(id)a0 eventPreNode:(id)a1;
+ (id)getPostscriptTextWith:(id)a0;
+ (id)postscriptTextFont;
+ (void)didTapSubtitlePostscriptTextWith:(id)a0 eventPreNode:(id)a1;
+ (BOOL)recommendTagEnablePostscript;
+ (BOOL)recommendTagEnableVisitPostscript;
+ (BOOL)canRecommendTagShowPostscriptWithModel:(id)a0;
+ (BOOL)canShowGuidePostscriptBtnWithModel:(id)a0;
+ (id)guidePostscriptImageURLString;
+ (void)didShowGuidePostscriptBtnWithModel:(id)a0 context:(id)a1;
+ (void)didTapGuidePostscriptBtnWithModel:(id)a0 context:(id)a1;
+ (void)trackRecommendVideoPostscriptEventWith:(id)a0 context:(id)a1 actionType:(id)a2;
+ (BOOL)canShowGuidePostscriptBubble;
+ (id)guidePostscriptBubbleText;
+ (void)didShowGuidePostscriptBubble;
+ (id)postscriptBubbleRules;
+ (BOOL)recommendToFriendPostscriptOpt;

- (void).cxx_destruct;
- (id)init;

@end
