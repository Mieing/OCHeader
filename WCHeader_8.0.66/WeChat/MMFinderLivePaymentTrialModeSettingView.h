@class MMLiveHalfScreenTitleBarView, NSString, MMFinderLiveTaskId, UIView, MMFinderLivePaymentTrialModeCell;
@protocol MMFinderLivePaymentTrialModeSettingViewDelegate;

@interface MMFinderLivePaymentTrialModeSettingView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLivePaymentTrialModeCellDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) MMFinderLivePaymentTrialModeCell *durationFromFirstJoinCell;
@property (retain, nonatomic) MMFinderLivePaymentTrialModeCell *durationFromLiveStartCell;
@property (nonatomic) long long purchaseLivePreviewType;
@property (weak, nonatomic) id<MMFinderLivePaymentTrialModeSettingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPurchaseLivePreviewType:(long long)a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)updatePurchaseLivePreviewType:(long long)a0;
- (void)updateCellSelectedStatus;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (id)liveTask;
- (void)pageSheetDidCloseWithType:(long long)a0;
- (void).cxx_destruct;

@end
