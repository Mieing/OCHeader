@class UIView, MMUILabel, MMFinderLiveRewardGiftItem, FinderLiveRewardGiftExtInfo, NSString, MMFinderLiveTaskId, RichTextView, UIVisualEffectView, MMUIButton, UILabel;
@protocol MMLiveRewardQuotaSheetViewDelegate;

@interface MMLiveRewardQuotaSheetView : MMPageSheetBaseView <UIGestureRecognizerDelegate, ILinkEventExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) RichTextView *settingGuideLabel;
@property (retain, nonatomic) UIVisualEffectView *visualEfView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long rewardQuota;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) FinderLiveRewardGiftExtInfo *rewardExtInfo;
@property (nonatomic) long long currentBalance;
@property (nonatomic) BOOL wecoinBalanceUpdated;
@property (nonatomic) BOOL needFaceVerify;
@property (retain, nonatomic) NSString *consumeQuotaVerifyUrl;
@property (retain, nonatomic) NSString *secverifyId;
@property (nonatomic) unsigned long long sourceSendMoreBubbleHost;
@property (copy, nonatomic) id /* block */ confirmedCallback;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *desc;
@property (readonly, nonatomic) NSString *settingGuide;
@property (readonly, nonatomic) NSString *actionButtonText;
@property (readonly, nonatomic) NSString *cancelButtonText;
@property (weak, nonatomic) id<MMLiveRewardQuotaSheetViewDelegate> operationDelegate;
@property (readonly, nonatomic) BOOL faceVerify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 rewardQuota:(unsigned long long)a1 giftItem:(id)a2 rewardExtInfo:(id)a3 currentBalance:(long long)a4 wecoinBalanceUpdated:(BOOL)a5 needFaceVerify:(BOOL)a6 consumeQuotaVerifyUrl:(id)a7 secverifyId:(id)a8 sourceSendMoreBubbleHost:(unsigned long long)a9 confirmedCallback:(id /* block */)a10;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)hidePageSheet;
- (void)showPageSheet;
- (void)showWithAnimated:(BOOL)a0;
- (id)liveTask;
- (void)onActionButtonClicked;
- (void)onClickCancelButton:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
