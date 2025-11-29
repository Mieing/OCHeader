@class WCFinderAnimationLoadingView, NSString;

@interface MMGroupLiveCommentView : MMLiveCommentView <MMGroupLiveMgrExt, WCActionSheetDelegate>

@property (retain, nonatomic) WCFinderAnimationLoadingView *forbiddCommentLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)commentTableWidth;
+ (double)commentTableWidthForPortrait;
+ (double)commentTableWidthForLandscape;

- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutUI;
- (void)layoutInputView;
- (void)layoutContentBackView;
- (void)layoutCommentTableTapView;
- (void)layoutCommentButton;
- (double)commentButtonLeft;
- (void)createCommentButton;
- (void)hideContent;
- (void)showContent;
- (double)commentTableBackViewBottom;
- (double)commentTableHeightForInputShow:(BOOL)a0;
- (id)createCommentTableViewModel;
- (BOOL)applyUpdateLiveCommentEnabled:(BOOL)a0 taskId:(id)a1;
- (id)commentFetchEngine;
- (Class)commentTableCellClass;
- (id)registerCellClasses;
- (void)showToastForBanOrAllowComment:(BOOL)a0 success:(BOOL)a1;
- (id)createCommentPostEngine;
- (void)onBanLiveCommentResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2 enableComment:(BOOL)a3;
- (void)onLiveIsEnableComment:(BOOL)a0 notifyContent:(id)a1 liveId:(unsigned long long)a2;
- (void)onCommentButtonClick;
- (BOOL)checkCommentAbilityForAudience;
- (void)showBanCommentActionSheet;
- (void)banOrOpenComment;
- (void)onCancelEditTouched:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)handleLiveIsEnableCommentForAnchor:(BOOL)a0;
- (void)handleLiveIsEnableCommentForAudience:(BOOL)a0;
- (void)updateCommentState:(unsigned long long)a0 banOrAllowCommentNotify:(id)a1;
- (void)updateCommentStateForAnchorWithNotifyCommentItem:(id)a0;
- (void)updateCommentStateForAudienceWithNotifyCommentItem:(id)a0;
- (void)reportForCommentStateUpdated;
- (void)onPostFailError:(id)a0 localSeq:(double)a1 taskId:(id)a2 extraInfo:(id)a3 clientMsgId:(id)a4;
- (void)handleBanOrOpenCommentFailed:(BOOL)a0;
- (void)updateComponentHiddenForCommentEnableChanged;
- (id)createUnReadCountLabel;
- (double)commentTableWidth;
- (double)commentTableHeight;
- (void)updateInputViewAccessibility:(BOOL)a0;
- (void).cxx_destruct;

@end
