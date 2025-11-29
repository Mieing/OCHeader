@interface WCTimelineRouterHelper : NSObject

+ (void)showImagePickerWithPickerScene:(int)a0 sourceType:(long long)a1 showsCameraButtonInPicker:(BOOL)a2 showsCameraButtonAtBottom:(BOOL)a3 customOptionsBlock:(id /* block */)a4 delegate:(id)a5 fromViewController:(id)a6;
+ (BOOL)navigateToInnerFeatureProfile:(id)a0 currentViewController:(id)a1 sourceFeed:(id)a2;
+ (BOOL)navigateToInnerFeatureProfile:(id)a0 currentViewController:(id)a1 sourceFeed:(id)a2 isSnSAd:(BOOL)a3 adParamInofStr:(id)a4;
+ (id)genGMsgIdWithTid:(id)a0 createTime:(unsigned long long)a1;
+ (BOOL)navigateToPostFinderViewController:(id)a0 currentViewController:(id)a1 finderPostDelegate:(id)a2;
+ (BOOL)navigateToMicroMerchantSubTimeline:(id)a0 ofFoldPlaceHolder:(id)a1 currentViewController:(id)a2;
+ (BOOL)navigateToPOI:(id)a0 currentViewController:(id)a1;
+ (BOOL)navigateToBizWithShare:(id)a0 postSharePoiViewModel:(id)a1 currentViewController:(id)a2 postCallback:(id /* block */)a3;
+ (BOOL)navigateToOriginPOI:(id)a0 currentViewController:(id)a1;
+ (BOOL)navigateToMusicPlayer:(id)a0 currentViewController:(id)a1;
+ (BOOL)presentTextCommitViewController:(id)a0 postReportSession:(id)a1 trashReportData:(id)a2 withExtBean:(id)a3;
+ (BOOL)presentCommitViewController:(BOOL)a0 arrImage:(id)a1 postReportSession:(id)a2 trashReportData:(id)a3 currentViewController:(id)a4 withExtBean:(id)a5;
+ (BOOL)presentCommitViewController:(BOOL)a0 arrImage:(id)a1 postReportSession:(id)a2 trashReportData:(id)a3 pureCurrentViewController:(id)a4 withExtBean:(id)a5 resultDelegate:(id)a6;
+ (BOOL)presentCommitViewController:(BOOL)a0 sightDraft:(id)a1 postReportSession:(id)a2 trashReportData:(id)a3 currentViewController:(id)a4 withExtBean:(id)a5;
+ (BOOL)presentSpringCommitViewControllerWithPostReportSession:(id)a0 springPostScene:(long long)a1 currentViewController:(id)a2;
+ (BOOL)presentForwardViewController:(id)a0 postReportSession:(id)a1 trashReportData:(id)a2 currentViewController:(id)a3;
+ (BOOL)presentReEditViewControllerWithDataItem:(id)a0 postReportSession:(id)a1 currentViewController:(id)a2;
+ (BOOL)presentReEditViewControllerWithDraftController:(id)a0 forwardItem:(id)a1 postReportSession:(id)a2 trashReportData:(id)a3 currentViewController:(id)a4 withExtBean:(id)a5;
+ (id)searchViewControllerForPresentingReEditViewControllerFromNavigationController:(id)a0;
+ (void)popAndPresentReEditViewControllerWithDataItem:(id)a0 postReportSession:(id)a1 currentNavigationViewController:(id)a2 completionHandler:(id /* block */)a3;
+ (void)popAndPresentReEditViewControllerWithDraftController:(id)a0 forwardItem:(id)a1 postReportSession:(id)a2 trashReportData:(id)a3 currentNavigationViewController:(id)a4 completionHandler:(id /* block */)a5;
+ (BOOL)navigateToContactInfoViewController:(id)a0 scene:(unsigned int)a1 opInfo:(id)a2 currentViewController:(id)a3;
+ (BOOL)navigateToContactInfoViewController:(id)a0 scene:(unsigned int)a1 opInfo:(id)a2 jumpData:(id)a3 currentViewController:(id)a4;
+ (BOOL)navigateToContactInfoViewController:(id)a0 scene:(unsigned int)a1 userData:(id)a2 currentViewController:(id)a3;
+ (BOOL)presentSetPermissionViewController:(id)a0 scene:(long long)a1 currentViewController:(id)a2;
+ (BOOL)presentSetPermissionViewController:(id)a0 tid:(id)a1 currentViewController:(id)a2;
+ (BOOL)navigateToTextDetailViewController:(id)a0 currentViewController:(id)a1;
+ (BOOL)navigateToTextDetailViewController:(id)a0 fromDataItem:(id)a1 isAdComment:(BOOL)a2 currentViewController:(id)a3;
+ (void)navigateToCommentDetailViewController:(id)a0 failedComment:(id)a1 currentViewController:(id)a2 pageContext:(id)a3;
+ (void)navigateToCommentDetailViewController:(id)a0 tipType:(long long)a1 currentViewController:(id)a2 pageContext:(id)a3;
+ (void)openMiaoJianApp:(id)a0 callback:(id /* block */)a1;

@end
