@class MMLiveGradientLayerView, FinderLiveShopWindowAdItem, MMWebImageView, MMUILabel;

@interface MMFinderLiveAdPromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) MMLiveGradientLayerView *titleImgContainerView;
@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleTagLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) FinderLiveShopWindowAdItem *adItem;

- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (void)convertPromoteMsgInfo:(id)a0;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)layoutUI;
- (void)refreshData;
- (void)handleSingleTapGesture:(id)a0;
- (void)onTapAction;
- (void)onClosed;
- (void)onShowed;
- (void)layoutTitleImgView;
- (void)layoutTitleTagLabel;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void)onAdAction;
- (id)onPromoteBubbleActionExtraInfo;
- (void).cxx_destruct;

@end
