@class UILongPressGestureRecognizer, MMFinderLiveRewardGiftItem, WCFinderAnimationLoadingView, PAGView, UIImageView, MMUIView, MMFinderLiveTaskId, NSString, MMUILabel, MMUIButton;
@protocol MMLiveRewardGiftPreviewWindowDelegate;

@interface MMLiveRewardGiftPreviewWindow : MMRectTriangleArrowView <CAAnimationDelegate, MMFinderLiveGiftResourceMgrExt, MMLiveRewardGiftNewCustomizationMagicRewardResExt>

@property (nonatomic) BOOL isPrepared;
@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *prepareLoadingView;
@property (retain, nonatomic) PAGView *previewAnimationView;
@property (retain, nonatomic) MMUIButton *sendButton;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UILongPressGestureRecognizer *sendButtonLongPressGesture;
@property (retain, nonatomic) MMUILabel *activityDescriptionLabel;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (weak, nonatomic) id<MMLiveRewardGiftPreviewWindowDelegate> delegate;
@property (copy, nonatomic) id /* block */ rewardGiftClickedCallback;
@property (copy, nonatomic) id /* block */ longPressedCallback;
@property (nonatomic) BOOL isMultipleReward;
@property (nonatomic) BOOL needAutoUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1 isMultipleReward:(BOOL)a2;
- (void)dealloc;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimation;
- (void)clearAllState;
- (void)updateWithGiftItem:(id)a0 mode:(unsigned long long)a1;
- (void)updateSendButtonWithGiftItem;
- (void)initUI;
- (void)updateMagicRewardResourceExtRegister;
- (void)updatePreviewViewDesc;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)checkIsPrepared;
- (void)updateIsPrepared:(BOOL)a0;
- (void)updateUIForPrepareStateChange;
- (void)updatePreviewAnimationViewHidden;
- (void)onLongpressSendButton:(id)a0;
- (void)showMenuItemsForAudience:(id)a0;
- (void)onActionJumpActivityItem:(id)a0;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void)onMagicRewardResourceStateChanged:(unsigned long long)a0 resource:(id)a1;
- (id)liveTask;
- (BOOL)needDisplayFansGroupEntrance;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void).cxx_destruct;

@end
