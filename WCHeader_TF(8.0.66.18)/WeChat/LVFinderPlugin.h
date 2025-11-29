@class NSString, WCFinderFeedContentVM, MegaVideoFinderCallback, NSNumber, UIViewController;

@interface LVFinderPlugin : NSObject <WCFinderDataItemExt, WCFinderContactExt, WCFinderSeeLaterExt, RingBackInfoDisplaySheetViewDelegate, ForwardMessageLogicDelegate, WCFinderFansProfileViewControllerDelegate, MMFlutterPlugin, MegaVideoFinderApi>

@property (retain, nonatomic) MegaVideoFinderCallback *flutterCallback;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) WCFinderFeedContentVM *currentFeedContentVM;
@property (retain, nonatomic) NSNumber *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentVMFromFinderObjectBytes:(id)a0 commentScene:(int)a1;
+ (id)contentVMFromFinderObject:(id)a0 commentScene:(int)a1;
+ (id)contentVMFromMegaFeed:(id)a0 commentScene:(int)a1;
+ (void)saveDataItemIfNeeded:(id)a0;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)getSelfWeChatContactWithCompletion:(id /* block */)a0;
- (void)getSelfFinderContactWithCompletion:(id /* block */)a0;
- (id)getFinderIdentityTypeWithError:(id *)a0;
- (void)setFinderIdentityType:(long long)a0 error:(id *)a1;
- (id)isSelfUsernameUsername:(id)a0 error:(id *)a1;
- (void)onTapMoreButtonInFriendsLikeListFeed:(id)a0 commentScene:(long long)a1 error:(id *)a2;
- (void)showFansProfileUsername:(id)a0 commentScene:(long long)a1 error:(id *)a2;
- (id)enableShowBulletCommentFeed:(id)a0 commentScene:(long long)a1 error:(id *)a2;
- (id)bulletCommentPortraitNumberOfLinesWithError:(id *)a0;
- (id)bulletCommentFontSizeWithError:(id *)a0;
- (id)bulletCommentStrokeColorAlphaWithError:(id *)a0;
- (id)bulletCommentStrokeWidthWithError:(id *)a0;
- (void)reportBulletCommentFeed:(id)a0 commentScene:(long long)a1 commentInfoId:(id)a2 error:(id *)a3;
- (id)bulletCommentShowDurationWithError:(id *)a0;
- (id)shouldShowTextStateWithError:(id *)a0;
- (id)videoCoverEnabledWithError:(id *)a0;
- (id)feedSetToSNSCoverSwitchWithError:(id *)a0;
- (id)showFavEntryOnActionSheetWithError:(id *)a0;
- (id)ringToneVideoDurationLimitWithError:(id *)a0;
- (id)showRingToneEntranceWithError:(id *)a0;
- (id)enableAirPlayVideoWithError:(id *)a0;
- (void)openFinderProfileUsername:(id)a0 commentScene:(long long)a1 isInHalfPanel:(BOOL)a2 feed:(id)a3 error:(id *)a4;
- (id)getSharePanelItemsConfigFeed:(id)a0 commentScene:(long long)a1 options:(id)a2 error:(id *)a3;
- (void)shareFeedToUserFeed:(id)a0 username:(id)a1 scene:(long long)a2 commentScene:(long long)a3 error:(id *)a4;
- (void)shareFeedFeed:(id)a0 scene:(long long)a1 commentScene:(long long)a2 error:(id *)a3;
- (void)addToTingListenLater:(id)a0;
- (void)thumbFavFeedFeed:(id)a0 isFav:(BOOL)a1 commentscene:(long long)a2 error:(id *)a3;
- (void)heartLikeFeedFeed:(id)a0 isLike:(BOOL)a1 commentscene:(long long)a2 error:(id *)a3;
- (void)followFinderAccoutFeed:(id)a0 isFollow:(BOOL)a1 commentscene:(long long)a2 error:(id *)a3;
- (id)getGlobalPlayProgressesOfTidsTids:(id)a0 error:(id *)a1;
- (void)getFinderContactInfoUsername:(id)a0 completion:(id /* block */)a1;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)a0;
- (void)onFinderDataItem:(id)a0 updateFavStateByExtention:(BOOL)a1;
- (void)onFinderContactFollowListHasChange:(id)a0;
- (void)onSeeLaterStateChanged:(BOOL)a0 withDataItem:(id)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)dealloc;
- (void)fansProfileViewController:(id)a0 clickPrivateMsgWithContact:(id)a1 finderContact:(id)a2 comment:(id)a3;
- (void)fansProfileViewController:(id)a0 clickFinderActionWithWXUsername:(id)a1;
- (void)wx_fansProfileViewController:(id)a0 clickActionWithFinderContact:(id)a1;
- (void)statReportExposeStartFeed:(id)a0 commentscene:(long long)a1 error:(id *)a2;
- (void)statReportExposeEndFeed:(id)a0 commentscene:(long long)a1 reportContext:(id)a2 error:(id *)a3;
- (void)statReportFlushWithError:(id *)a0;
- (void)report18054AvatarClickFeed:(id)a0 commentScene:(long long)a1 avatarType:(long long)a2 isLandscape:(BOOL)a3 error:(id *)a4;
- (void)openFinderDetailFeedId:(id)a0 commentScene:(long long)a1 error:(id *)a2;
- (void)openWebPageUrl:(id)a0 commentScene:(long long)a1 error:(id *)a2;
- (void)openHalfScreenWebPageUrl:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
