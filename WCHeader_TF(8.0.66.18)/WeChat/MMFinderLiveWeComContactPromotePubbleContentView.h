@class FinderLivePromoteInfoListWecomContact, MMWebImageView, MMUIButton, MMUILabel;

@interface MMFinderLiveWeComContactPromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *companyLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) FinderLivePromoteInfoListWecomContact *wecomContact;

- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)refreshData;
- (void)handleSingleTapGesture:(id)a0;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)layoutActionButton;
- (void)layoutTitleImgView;
- (void)layoutCompanyLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void)onHandleAction;
- (void)gotoWeComContactProfile;
- (double)rightWidgetLeft;
- (void).cxx_destruct;

@end
