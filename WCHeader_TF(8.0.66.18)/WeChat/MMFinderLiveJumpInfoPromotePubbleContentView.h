@class MMUIButton, FinderJumpInfo, MMWebImageView, MMUILabel;

@interface MMFinderLiveJumpInfoPromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleTagLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) MMUIButton *actionButton;

- (void)convertPromoteMsgInfo:(id)a0;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (void)handleSingleTapGesture:(id)a0;
- (void)actionButtonClicked;
- (void)onPromoteButtonClicked:(BOOL)a0;
- (void)onTapAction:(BOOL)a0;
- (void)onClosed;
- (void)onShowed;
- (void)onDismissed;
- (id)onPromoteBubbleActionExtraInfo;
- (long long)getReportActionType;
- (void)layoutTitleImgView;
- (void)layoutTitleTagLabel;
- (void)layoutActionButton;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
