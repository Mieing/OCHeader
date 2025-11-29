@class FinderMemberZonePromoteInfo, MMWebImageView, MMUIButton, MMUILabel;

@interface MMFinderLiveBloggerMemberPromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *companyLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) FinderMemberZonePromoteInfo *memberZonePromoteInfo;

- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)refreshData;
- (void)handleSingleTapGesture:(id)a0;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)layoutActionButton;
- (void)layoutTitleImgView;
- (void)layoutCompanyLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void)onHandleAction;
- (void)gotoMemberZone;
- (double)rightWidgetLeft;
- (void)onShowed;
- (void)onClosed;
- (id)onPromoteBubbleActionExtraInfo;
- (void).cxx_destruct;

@end
