@class AWENoticeFollowPushView, NSString, AWENoticePushViewModel, AWEInnerPushCommonView, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWENoticeFollowPushViewModel : NSObject <AWEInnerNotificationContent, AWENoticeFollowPushViewDelegate>

@property (retain, nonatomic) AWENoticePushViewModel *noticePushModel;
@property (retain, nonatomic) AWENoticeFollowPushView *oldView;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (copy, nonatomic) id /* block */ followBlock;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (id)titleAttributedText;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)avatarUrl;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (BOOL)enableLightInteractionInQRCode;
- (id)dispatchTitleAttributedTextIsPrimary:(BOOL)a0;
- (id)extTagText;
- (id)extTagTextColor;
- (id)extTagBackgroundColor;
- (id)extTagTextFont;
- (id)contentAttributedText;
- (void)p_folowUser;
- (id)defaultAvatar;
- (id)beforeFollowColor;
- (id)afterFollowColor;
- (id)dispatchContentAttributedTextIsPrimary:(BOOL)a0;
- (void)trackFollowCardForNotice:(id)a0;
- (void)setupFollowBlock;
- (void)onFollowAction:(id)a0 user:(id)a1;
- (void)onFollowComplete:(id)a0 user:(id)a1;
- (void)updateContentTextAfterFollowSuccess;
- (void)p_updateForInteraction;
- (void)updateAfterFollowSuccessWithMessage:(id)a0;
- (id)enterFromForNextStep;
- (void)trackFollowCardWithUser:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;
- (id)actionButtonText;
- (void)updateProperties;

@end
