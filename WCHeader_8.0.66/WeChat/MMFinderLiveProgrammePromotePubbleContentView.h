@class MMUIButton, FinderLiveProgrammePromoteInfo, UIImageView, WCFinderBaseCgi, UIView, MMLiveIconButton, MMUILabel;

@interface MMFinderLiveProgrammePromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *startTimeLabel;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMLiveIconButton *actionButton;
@property (retain, nonatomic) FinderLiveProgrammePromoteInfo *programInfo;
@property (nonatomic) BOOL isLastSubscribed;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) WCFinderBaseCgi *subscribeCGI;

- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)onDismissed;
- (void)updateActionButtonStyle;
- (void)handleLastSubscribeState;
- (void)onSubscribeAction:(id)a0;
- (void)onDetailButtonClick:(id)a0;
- (void)changeSubscribeStatus;
- (void)layoutIconImgView;
- (void)layoutDetailButton;
- (void)layoutActionButton;
- (void)layoutTitleLabel;
- (void)layoutStartTimeLabel;
- (void)layoutSplitView;
- (void)layoutDetailLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
